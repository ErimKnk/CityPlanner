#include "deletecity.h"
#include "ui_deletecity.h"

//Add Street not deletecity i changed it !!

Deletecity::Deletecity(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Deletecity)
{
    ui->setupUi(this);
}

Deletecity::~Deletecity()
{
    delete ui;
}

QString Deletecity::getCityName1() const
{
    return ui->lineEditCity1->text();
}

QString Deletecity::getCityName2() const
{
    return ui->lineEditCity2->text();
}

bool Deletecity::isMotorwaySelected() const
{
    return ui->motorWay->isChecked();
}

bool Deletecity::isStateRoadSelected() const
{
    return ui->stateRoad->isChecked();
}
