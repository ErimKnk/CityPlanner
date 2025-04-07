#include "findcity.h"
#include "ui_findcity.h"
#include <QMessageBox>
FindCity::FindCity(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindCity)
{
    ui->setupUi(this);
}

FindCity::~FindCity()
{
    delete ui;
}

QString FindCity::getCityName() const
{
    return ui->lineEditCity->text();
}



