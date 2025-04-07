#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QString getCityName() const;
    int getX() const;
    int getY() const;


private:
    Ui::Dialog *ui;

};

#endif // ADDCITYDIALOG_H
