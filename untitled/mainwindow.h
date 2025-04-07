#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QMessageBox>
#include <QPen>
#include <QDebug>
#include <QString>
#include "city.h"
#include "map.h"
#include "mapio.h"
#include "mapionrw.h"
#include "dialog.h"
#include "findcity.h"
#include "deletecity.h"
#include "dijkstra.h"
#include <QVector>
#include "findpath.h"
#include "stateroad.h"
#include "motorway.h"
#include "dijkstratime.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_pushButton_teste_was_clicked();

    void on_pushButton_Random_clicked();

    void on_pushButton_add_city_clicked();

    void on_pushButtonFillMap_clicked();

    void on_pushButton_FindCity_clicked();

    void on_pushButtonStreets_clicked();

    void on_actionExit_triggered();

    void on_actionAbout_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAdd_And_Draw_Street_triggered();

    void on_actionAdd_City_With_Map_triggered();

    void on_actionCity_Taste_triggered();

    void on_actionDraw_City_Map_triggered();

    void on_actiontestAbstractMap_triggered();

    void on_actiontestShowDialog_triggered();

    void on_checkBoxShowTests_clicked();

    void on_checkBoxShowList_clicked();

    void on_pushButtonAddStreet_clicked();

    void on_actiontestShortestPath_triggered();

    void on_findPath_clicked();

    void on_actionClear_Dots_And_Lines_triggered();

    void on_actionDelete_Cities_triggered();

    void on_pushButtonTime_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsView *view;
    Map map;
    QGraphicsRectItem *lastRect = nullptr;
    MapIo *mapio;
    QGraphicsEllipseItem *yellow = nullptr;
     QVector<QGraphicsLineItem*> redLines;
     void clearRedLines();
};
#endif // MAINWINDOW_H
