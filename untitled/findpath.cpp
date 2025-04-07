#include "findpath.h"
#include "ui_findpath.h"

findPath::findPath(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::findPath)
    , map(nullptr)
{
    ui->setupUi(this);
}

findPath::~findPath()
{
    delete ui;
}
void findPath::setMap(Map *mapPtr)
{
    map = mapPtr;
}



void findPath::Actualisieren()

    {
        if (!map) return;

        QVector<City*> cities = map->getCityList();

        for (City* city : cities) {
            ui->comboBox->addItem(city->getName());
            ui->comboBox_2->addItem(city->getName());
        }
    }

    QString findPath::getStartCityName() const
    {
        return ui->comboBox->currentText();
    }

    QString findPath::getEndCityName() const
    {
        return ui->comboBox_2->currentText();
    }
