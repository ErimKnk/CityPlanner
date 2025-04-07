/********************************************************************************
** Form generated from reading UI file 'deletecity.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECITY_H
#define UI_DELETECITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Deletecity
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEditCity1;
    QLineEdit *lineEditCity2;
    QLabel *label_2;
    QCheckBox *motorWay;
    QCheckBox *stateRoad;

    void setupUi(QDialog *Deletecity)
    {
        if (Deletecity->objectName().isEmpty())
            Deletecity->setObjectName("Deletecity");
        Deletecity->resize(368, 252);
        buttonBox = new QDialogButtonBox(Deletecity);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(150, 190, 191, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Deletecity);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 81, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        lineEditCity1 = new QLineEdit(Deletecity);
        lineEditCity1->setObjectName("lineEditCity1");
        lineEditCity1->setGeometry(QRect(30, 110, 113, 26));
        lineEditCity2 = new QLineEdit(Deletecity);
        lineEditCity2->setObjectName("lineEditCity2");
        lineEditCity2->setGeometry(QRect(220, 110, 113, 26));
        label_2 = new QLabel(Deletecity);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 60, 81, 41));
        label_2->setFont(font);
        motorWay = new QCheckBox(Deletecity);
        motorWay->setObjectName("motorWay");
        motorWay->setGeometry(QRect(10, 180, 91, 24));
        stateRoad = new QCheckBox(Deletecity);
        stateRoad->setObjectName("stateRoad");
        stateRoad->setGeometry(QRect(10, 210, 91, 24));

        retranslateUi(Deletecity);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Deletecity, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Deletecity, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Deletecity);
    } // setupUi

    void retranslateUi(QDialog *Deletecity)
    {
        Deletecity->setWindowTitle(QCoreApplication::translate("Deletecity", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Deletecity", "City 1", nullptr));
        label_2->setText(QCoreApplication::translate("Deletecity", "City 2", nullptr));
        motorWay->setText(QCoreApplication::translate("Deletecity", "Motorway", nullptr));
        stateRoad->setText(QCoreApplication::translate("Deletecity", "Stateroad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deletecity: public Ui_Deletecity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECITY_H
