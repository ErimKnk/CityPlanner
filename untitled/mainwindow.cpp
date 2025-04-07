#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::MainWindow), scene(new QGraphicsScene(this)), mapio(new MapIoNrw())
{
    ui->setupUi(this);

    ui->graphicsView->setScene(scene);

    //scene->addEllipse(50, 15, 100,70, QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));


    //scene->addLine(10, 10, 190, 10, pen);



    //QGraphicsTextItem *text = new QGraphicsTextItem;
    //text->setPos(70, -10); // Metnin pozisyonu
    //text->setPlainText("Hallo Welt!"); // Metin
    //scene->addItem(text);

    ui->menuTastes->setEnabled(false);
    ui->line_edit_test->hide();
    ui->pushButton_teste_was->hide();
    ui->pushButton_Random->hide();
    ui->listWidgetStreets->hide();



}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_teste_was_clicked()
{

    scene->clear();
    qDebug()<<"Wasaaap!!!";
    QString userInput = ui->line_edit_test->text();
    qDebug() << QString("User Input: %1").arg(userInput);

    bool ok;
    int number = userInput.toInt(&ok);
    if (ok) {
        int incrementedNumber = number + 4;
        qDebug() << QString("Added 4: %1").arg(incrementedNumber);
    } else {
        qDebug() << "Thats Not A Number.";
    }
}




void MainWindow::on_pushButton_Random_clicked()
{



    if (lastRect != nullptr) {
        scene->removeItem(lastRect);
        delete lastRect;
        lastRect = nullptr;
    }


    int x = rand()%100;
    int y = rand()%100;
    lastRect = scene->addRect(x, y, 20, 10, QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));
}








void MainWindow::on_actionExit_triggered()
{
    close();
}




void MainWindow::on_actionClear_Scene_triggered()
{
    if (lastRect != nullptr){
    scene->removeItem(lastRect);
    delete lastRect;
    lastRect = nullptr;
    }
   scene->clear();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "This is a simple application demonstrating Qt.");
}


void MainWindow::on_actionCity_Taste_triggered()
{

    scene->clear();
    City city1("City1", 50, 50);
    city1.draw(*scene);



    City city2("City2", 150, 150);
    city2.draw(*scene);

}


void MainWindow::on_actionAdd_City_With_Map_triggered()
{

    scene->clear();
    City* city1 = new City("City1", 50, 50);
    map.addCity(city1);

    City* city2 = new City("City2", 150, 150);
    map.addCity(city2);
}


void MainWindow::on_actionDraw_City_Map_triggered()
{

    scene->clear();
    map.draw(*scene);
}


void MainWindow::on_actionAdd_And_Draw_Street_triggered()
{
    scene->clear();
    City* city1 = new City("City1", 50, 50);
    City* city2 = new City("City2", 150, 150);
    map.addCity(city1);
    map.addCity(city2);

  Street* street = new StateRoad(city1, city2);
    if (map.addStreet(street)) {
        map.draw(*scene);
    }
}


void MainWindow::on_checkBoxShowTests_clicked()
{
    bool isChecked = ui->checkBoxShowTests->isChecked();
    if (isChecked) {
        ui->menuTastes->setEnabled(true);
        ui->line_edit_test->show();
        ui->pushButton_teste_was->show();
        ui->pushButton_Random->show();

    }
    else {
        ui->menuTastes->setEnabled(false);
        ui->line_edit_test->hide();
        ui->pushButton_teste_was->hide();
        ui->pushButton_Random->hide();



    }
}


void MainWindow::on_pushButton_add_city_clicked()
{
    Dialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString name = dialog.getCityName();
        int x = dialog.getX();
        int y = dialog.getY();
        qDebug() << "City name:" << name << ", x:" << x << ", y:" << y;

        City* city = new City(name, x, y);
        map.addCity(city);
        map.draw(*scene);
    } else {
        qDebug() << "Dialog rejected.";
    }
}


void MainWindow::on_pushButtonFillMap_clicked()
{
    map.deleteCities();
    mapio->fillMap(map);
    map.draw(*scene);

}


void MainWindow::on_actiontestShowDialog_triggered()
{
    Dialog dialog;
    int result = dialog.exec();
    qDebug() << QString("Dialog result: %1").arg(result);
}


void MainWindow::on_actiontestAbstractMap_triggered()
{
    {
        Map testMap;
        City *a = new City("a", 0, 0);
        City *b = new City("b", 0, 100);
        City *c = new City("c", 100, 300);
        Street *s = new StateRoad(a, b);
        Street *s2 = new Motorway(b, c);


        qDebug() << "MapTest: Start Test of the Map";
        {
            qDebug() << "MapTest: adding wrong street";
            bool t1 = testMap.addStreet(s);
            if (t1) {
                qDebug() << "-Error: Street should not bee added, if cities have not been added.";
            }
        }

        {
            qDebug() << "MapTest: adding correct street";
            testMap.addCity(a);
            testMap.addCity(b);
            bool t1 = testMap.addStreet(s);
            if (!t1) {
                qDebug() << "-Error: It should be possible to add this street.";
            }
        }

        {
            qDebug() << "MapTest: findCity";
            City* city = testMap.findCity("a");
            if (city != a)
                qDebug() << "-Error: City a could not be found.";

            city = testMap.findCity("b");
            if (city != b)
                qDebug() << "-Error: City b could not be found.";

            city = testMap.findCity("c");
            if (city != nullptr)
                qDebug() << "-Error: If city could not be found 0 should be returned.";
        }

        testMap.addCity(c);
        testMap.addStreet(s2);

        {
            qDebug() << "MapTest: getOppositeCity";
            const City *city = testMap.getOppositeCity(s, a);
            if (city != b)
                qDebug() << "-Error: Opposite city should be b.";

            city = map.getOppositeCity(s, c);
            if (city != nullptr)
                qDebug() << "-Error: Opposite city for a city which is not linked by given street should be 0.";
        }

        {
            qDebug() << "MapTest: streetLength";
            double l = testMap.getLength(s2);
            double expectedLength = 223.6;
            // compare doubles with 5% tolerance
            if (l < expectedLength * 0.95 || l > expectedLength *1.05)
                qDebug() << "-Error: Street Length is not equal to the expected.";

        }

        {
            qDebug() << "MapTest: getStreetList";
            QVector<Street*> streetList1 = testMap.getStreetList(a);
            QVector<Street*> streetList2 = testMap.getStreetList(b);
            if (streetList1.size() != 1) {
                qDebug() << "-Error: One street should be found for city a.";
            }
            else if (*streetList1.begin() != s) {
                qDebug() << "-Error: The wrong street has been found for city a.";
            }

            if (streetList2.size() != 2)
                qDebug() << "-Error: Two streets should be found for city b.";
        }

        qDebug() << "MapTest: End Test of the Map.";
    }

}


void MainWindow::on_pushButton_FindCity_clicked()
{

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::yellow);

    FindCity findcity(this);
    if (findcity.exec() == QDialog::Accepted) {
        QString name = findcity.getCityName();



        City* Aachen;
        if(map.findCity(name) != nullptr){
            Aachen = map.findCity(name);
            if (yellow != nullptr) {
                qDebug() << "Removing previous yellow ellipse";
                scene->removeItem(yellow);
                delete yellow;
                yellow = nullptr;
            }

            // Yeni sarı daireyi ekle
            yellow = scene->addEllipse(Aachen->getX(), Aachen->getY(), 6, 6, pen, QBrush(Qt::yellow));

            qDebug() << "City Found: " << name ;
        }
        else {
            qDebug() << "There Is No City With That Name !!! "  ;
        }

    }
    else {
        qDebug() << "Dialog rejected.";
    }

}




void MainWindow::on_pushButtonStreets_clicked()
{
    ui->listWidgetStreets->clear();

    for(City* city : map.getCityList()){



        for(Street* street : map.getStreetList(city)){
         City* A;
            A = map.getOppositeCity(street,city);

            ui->listWidgetStreets->addItem("For City: "+ city->getName() + "  ->  " + city->getName() +"------"+ A->getName()+" -> Length: "+QString::number(street->getLength()));

        }



    }
}



void MainWindow::on_checkBoxShowList_clicked()
{
    bool isChecked = ui->checkBoxShowList->isChecked();
    if (isChecked) {


        ui->listWidgetStreets->show();

    }
    else {

        ui->listWidgetStreets->hide();



    }
}


void MainWindow::on_pushButtonAddStreet_clicked()
{
    Deletecity deletecity(this);
    if (deletecity.exec() == QDialog::Accepted) {
        QString name1 = deletecity.getCityName1();
        QString name2 = deletecity.getCityName2();

        City* city1 = map.findCity(name1);
        City* city2 = map.findCity(name2);

        Street* street = nullptr;

        if(deletecity.isStateRoadSelected() && deletecity.isMotorwaySelected()){
            QMessageBox::warning(this, "You Can't Select Both Street Types" ,"Please select either Motorway or State Road.");
        }
           else if (deletecity.isMotorwaySelected()) {
            if(city1!=nullptr&&city2!=nullptr){
            street = new Motorway(city1, city2);
            }
            else{
                QMessageBox::warning(this, "Wrong City Name", "Please Enter Valid City Names");
            }
        } else if (deletecity.isStateRoadSelected()) {
            if(city1!=nullptr&&city2!=nullptr){
            street = new StateRoad(city1, city2);
            }
            else{
                 QMessageBox::warning(this, "Wrong City Name", "Please Enter Valid City Names");
            }
        }
         else {
             QMessageBox::warning(this, "No Street Type Selected", "Please select either Motorway or State Road.");
        }

        if (street) {
            map.addStreet(street);
            street->draw(*scene);
        }
    } else {
        qDebug() << "Dialog rejected.";
    }
}


void MainWindow::on_actiontestShortestPath_triggered()
{
    QString startCityName = "Aachen";
    QString endCityName = "Bilafat";

    City* startCity = map.findCity(startCityName);
    City* endCity = map.findCity(endCityName);

    if (!startCity || !endCity) {
        qDebug() << "One or both cities not found.";
        return;
    }

    QVector<Street*> path = Dijkstra::search(map, startCityName, endCityName);

    qDebug() << "Shortest path:";
    for (Street* street : path) {
        qDebug() << street->getCity1()->getName() << " to " << street->getCity2()->getName();
        street->drawRed(*scene);  // Street sınıfında drawRed fonksiyonunu implement edin
    }
}

void MainWindow::clearRedLines()
{
    for (QGraphicsLineItem* line : redLines) {
        scene->removeItem(line);
        delete line;
    }
    redLines.clear();
}
void MainWindow::on_findPath_clicked(){
    double totalTime = 0;
    double totalRoad = 0;
    findPath findPathDialog(this);
findPathDialog.setMap(&map);
findPathDialog.Actualisieren();
if (findPathDialog.exec() == QDialog::Accepted) {
     clearRedLines();
    QString startCityName = findPathDialog.getStartCityName();
    QString endCityName = findPathDialog.getEndCityName();

    City* startCity = map.findCity(startCityName);
    City* endCity = map.findCity(endCityName);

    if (!startCity || !endCity) {
        qDebug() << "One or both cities not found.";
        return;


    }

    QVector<Street*> path = Dijkstra::search(map, startCityName, endCityName);

ui->listWidgetStreets->clear();

    qDebug() << "Shortest path:";
ui->listWidgetStreets->addItem("Shortest Path");
    for (Street* street : path) {
        totalTime += street->getTime();
        totalRoad += street->getLength();
        qDebug() << street->getCity1()->getName() << " to " << street->getCity2()->getName();
        ui->listWidgetStreets->addItem("Street: "+ street->getCity1()->getName() + "  To  " + street->getCity2()->getName() +"------"+" -> Length: "+QString::number(street->getLength())+" -> Avarage Speed: "+QString::number(street->getSpeed())+" -> Time: "+QString::number(street->getTime()));
        QGraphicsLineItem* line = street->drawRed(*scene);
        redLines.append(line);
    }
    ui->listWidgetStreets->addItem("Total Road Length: "+QString::number(totalRoad));
    ui->listWidgetStreets->addItem("Total Time: "+QString::number(totalTime));
}

}



void MainWindow::on_actionClear_Dots_And_Lines_triggered()
{
    clearRedLines();

    scene->removeItem(yellow);
    delete yellow;
    yellow = nullptr;
}


void MainWindow::on_actionDelete_Cities_triggered()
{
    map.deleteCities();
    scene->clear();
}


void MainWindow::on_pushButtonTime_clicked()
{
    double totalTime = 0;
    double totalRoad = 0;
    findPath findPathDialog(this);
    findPathDialog.setMap(&map);
    findPathDialog.Actualisieren();
    if (findPathDialog.exec() == QDialog::Accepted) {
        clearRedLines();
        QString startCityName = findPathDialog.getStartCityName();
        QString endCityName = findPathDialog.getEndCityName();

        City* startCity = map.findCity(startCityName);
        City* endCity = map.findCity(endCityName);

        if (!startCity || !endCity) {
            qDebug() << "One or both cities not found.";
            return;
        }

        QVector<Street*> path = dijkstratime::search(map, startCityName, endCityName);

        ui->listWidgetStreets->clear();

        qDebug() << "Fastest path:";
        ui->listWidgetStreets->addItem("Fastest Path");
        for (Street* street : path) {
            totalTime += street->getTime();
            totalRoad += street->getLength();
            qDebug() << street->getCity1()->getName() << " to " << street->getCity2()->getName();
            ui->listWidgetStreets->addItem("Street: "+ street->getCity1()->getName() + "  To  " + street->getCity2()->getName() +"------"+" -> Length: "+QString::number(street->getLength())+" -> Avarage Speed: "+QString::number(street->getSpeed())+" -> Time: "+QString::number(street->getTime()));
            QGraphicsLineItem* line = street->drawRed(*scene);
            redLines.append(line);
        }
         ui->listWidgetStreets->addItem("Total Road Length: "+QString::number(totalRoad));
        ui->listWidgetStreets->addItem("Total Time: "+QString::number(totalTime));
    }
}


