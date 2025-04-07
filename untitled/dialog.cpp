#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::getCityName() const
{
    return ui->lineEditCityName->text();
}

int Dialog::getX() const
{
    return ui->spinBoxX->value();
}

int Dialog::getY() const
{
    return ui->spinBoxY->value();
}




