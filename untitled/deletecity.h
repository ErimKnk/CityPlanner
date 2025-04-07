#ifndef DELETECITY_H
#define DELETECITY_H

#include <QDialog>

//Add Street not deletecity i changed it !!

namespace Ui {
class Deletecity;
}

class Deletecity : public QDialog
{
    Q_OBJECT

public:
    explicit Deletecity(QWidget *parent = nullptr);
    ~Deletecity();

    QString getCityName1() const;

    QString getCityName2() const;

    bool isMotorwaySelected() const;
    bool isStateRoadSelected() const;

private:
    Ui::Deletecity *ui;
};

#endif // DELETECITY_H
