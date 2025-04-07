#ifndef FINDCITY_H
#define FINDCITY_H

#include <QDialog>
#include"map.h"
#include"city.h"
#include"mainwindow.h"
namespace Ui {
class FindCity;
}

class FindCity : public QDialog
{
    Q_OBJECT

public:
    explicit FindCity(QWidget *parent = nullptr);

    ~FindCity();

    QString getCityName() const;




private:
    Ui::FindCity *ui;


};

#endif // FINDCITY_H
