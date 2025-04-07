/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionClear_Scene;
    QAction *actionAdd_And_Draw_Street;
    QAction *actionAdd_City_With_Map;
    QAction *actionCity_Taste;
    QAction *actionDraw_City_Map;
    QAction *actiontestAbstractMap;
    QAction *actiontestShowDialog;
    QAction *actiontestShortestPath;
    QAction *actionClear_Dots_And_Lines;
    QAction *actionDelete_Cities;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_FindCity;
    QCheckBox *checkBoxShowList;
    QListWidget *listWidgetStreets;
    QPushButton *pushButtonFillMap;
    QPushButton *pushButtonStreets;
    QLabel *label;
    QPushButton *findPath;
    QSpacerItem *verticalSpacer;
    QGraphicsView *graphicsView;
    QPushButton *pushButtonAddStreet;
    QPushButton *pushButton_Random;
    QCheckBox *checkBoxShowTests;
    QLabel *label_2;
    QPushButton *pushButton_add_city;
    QPushButton *pushButton_teste_was;
    QLineEdit *line_edit_test;
    QPushButton *pushButtonTime;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuInfo;
    QMenu *menuScene;
    QMenu *menuTastes;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1449, 674);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionClear_Scene = new QAction(MainWindow);
        actionClear_Scene->setObjectName("actionClear_Scene");
        actionAdd_And_Draw_Street = new QAction(MainWindow);
        actionAdd_And_Draw_Street->setObjectName("actionAdd_And_Draw_Street");
        actionAdd_City_With_Map = new QAction(MainWindow);
        actionAdd_City_With_Map->setObjectName("actionAdd_City_With_Map");
        actionCity_Taste = new QAction(MainWindow);
        actionCity_Taste->setObjectName("actionCity_Taste");
        actionDraw_City_Map = new QAction(MainWindow);
        actionDraw_City_Map->setObjectName("actionDraw_City_Map");
        actiontestAbstractMap = new QAction(MainWindow);
        actiontestAbstractMap->setObjectName("actiontestAbstractMap");
        actiontestShowDialog = new QAction(MainWindow);
        actiontestShowDialog->setObjectName("actiontestShowDialog");
        actiontestShortestPath = new QAction(MainWindow);
        actiontestShortestPath->setObjectName("actiontestShortestPath");
        actionClear_Dots_And_Lines = new QAction(MainWindow);
        actionClear_Dots_And_Lines->setObjectName("actionClear_Dots_And_Lines");
        actionDelete_Cities = new QAction(MainWindow);
        actionDelete_Cities->setObjectName("actionDelete_Cities");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_FindCity = new QPushButton(centralwidget);
        pushButton_FindCity->setObjectName("pushButton_FindCity");

        gridLayout->addWidget(pushButton_FindCity, 6, 0, 1, 1);

        checkBoxShowList = new QCheckBox(centralwidget);
        checkBoxShowList->setObjectName("checkBoxShowList");

        gridLayout->addWidget(checkBoxShowList, 15, 0, 1, 1);

        listWidgetStreets = new QListWidget(centralwidget);
        listWidgetStreets->setObjectName("listWidgetStreets");

        gridLayout->addWidget(listWidgetStreets, 14, 1, 1, 1, Qt::AlignBottom);

        pushButtonFillMap = new QPushButton(centralwidget);
        pushButtonFillMap->setObjectName("pushButtonFillMap");

        gridLayout->addWidget(pushButtonFillMap, 5, 0, 1, 1);

        pushButtonStreets = new QPushButton(centralwidget);
        pushButtonStreets->setObjectName("pushButtonStreets");

        gridLayout->addWidget(pushButtonStreets, 7, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 15, 1, 1, 1, Qt::AlignRight);

        findPath = new QPushButton(centralwidget);
        findPath->setObjectName("findPath");

        gridLayout->addWidget(findPath, 8, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 1, 14, 1);

        pushButtonAddStreet = new QPushButton(centralwidget);
        pushButtonAddStreet->setObjectName("pushButtonAddStreet");

        gridLayout->addWidget(pushButtonAddStreet, 4, 0, 1, 1);

        pushButton_Random = new QPushButton(centralwidget);
        pushButton_Random->setObjectName("pushButton_Random");

        gridLayout->addWidget(pushButton_Random, 2, 0, 1, 1);

        checkBoxShowTests = new QCheckBox(centralwidget);
        checkBoxShowTests->setObjectName("checkBoxShowTests");

        gridLayout->addWidget(checkBoxShowTests, 16, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 16, 1, 1, 1, Qt::AlignRight|Qt::AlignBottom);

        pushButton_add_city = new QPushButton(centralwidget);
        pushButton_add_city->setObjectName("pushButton_add_city");

        gridLayout->addWidget(pushButton_add_city, 3, 0, 1, 1);

        pushButton_teste_was = new QPushButton(centralwidget);
        pushButton_teste_was->setObjectName("pushButton_teste_was");

        gridLayout->addWidget(pushButton_teste_was, 1, 0, 1, 1);

        line_edit_test = new QLineEdit(centralwidget);
        line_edit_test->setObjectName("line_edit_test");

        gridLayout->addWidget(line_edit_test, 0, 0, 1, 1);

        pushButtonTime = new QPushButton(centralwidget);
        pushButtonTime->setObjectName("pushButtonTime");

        gridLayout->addWidget(pushButtonTime, 9, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1449, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        menuScene = new QMenu(menubar);
        menuScene->setObjectName("menuScene");
        menuTastes = new QMenu(menubar);
        menuTastes->setObjectName("menuTastes");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menubar->addAction(menuScene->menuAction());
        menubar->addAction(menuTastes->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuInfo->addAction(actionAbout);
        menuScene->addAction(actionClear_Scene);
        menuScene->addAction(actionClear_Dots_And_Lines);
        menuScene->addAction(actionDelete_Cities);
        menuTastes->addAction(actionAdd_And_Draw_Street);
        menuTastes->addAction(actionAdd_City_With_Map);
        menuTastes->addAction(actionCity_Taste);
        menuTastes->addAction(actionDraw_City_Map);
        menuTastes->addAction(actiontestAbstractMap);
        menuTastes->addAction(actiontestShowDialog);
        menuTastes->addAction(actiontestShortestPath);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionClear_Scene->setText(QCoreApplication::translate("MainWindow", "Clear Scene", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_Scene->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_And_Draw_Street->setText(QCoreApplication::translate("MainWindow", "Add And Draw Street", nullptr));
        actionAdd_City_With_Map->setText(QCoreApplication::translate("MainWindow", "Add City With Map", nullptr));
        actionCity_Taste->setText(QCoreApplication::translate("MainWindow", "City Taste", nullptr));
        actionDraw_City_Map->setText(QCoreApplication::translate("MainWindow", "Draw City Map", nullptr));
        actiontestAbstractMap->setText(QCoreApplication::translate("MainWindow", "testAbstractMap", nullptr));
        actiontestShowDialog->setText(QCoreApplication::translate("MainWindow", "testShowDialog", nullptr));
        actiontestShortestPath->setText(QCoreApplication::translate("MainWindow", "testShortestPath", nullptr));
        actionClear_Dots_And_Lines->setText(QCoreApplication::translate("MainWindow", "Clear Dots And Lines", nullptr));
        actionDelete_Cities->setText(QCoreApplication::translate("MainWindow", "Delete Cities", nullptr));
        pushButton_FindCity->setText(QCoreApplication::translate("MainWindow", "Find City", nullptr));
        checkBoxShowList->setText(QCoreApplication::translate("MainWindow", "Show List", nullptr));
        pushButtonFillMap->setText(QCoreApplication::translate("MainWindow", "Fill Map", nullptr));
        pushButtonStreets->setText(QCoreApplication::translate("MainWindow", "Show Streets", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Green Road -> 50", nullptr));
        findPath->setText(QCoreApplication::translate("MainWindow", "Find Shortest Path", nullptr));
        pushButtonAddStreet->setText(QCoreApplication::translate("MainWindow", "Add Street", nullptr));
        pushButton_Random->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        checkBoxShowTests->setText(QCoreApplication::translate("MainWindow", "Show Tests", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Purple Road -> 130", nullptr));
        pushButton_add_city->setText(QCoreApplication::translate("MainWindow", "Add City", nullptr));
        pushButton_teste_was->setText(QCoreApplication::translate("MainWindow", "Add 4", nullptr));
        pushButtonTime->setText(QCoreApplication::translate("MainWindow", "Find Fastest Path", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
        menuScene->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuTastes->setTitle(QCoreApplication::translate("MainWindow", "Tastes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
