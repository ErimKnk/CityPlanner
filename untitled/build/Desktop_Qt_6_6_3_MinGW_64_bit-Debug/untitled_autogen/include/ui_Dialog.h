/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditCityName;
    QLabel *label_2;
    QSpinBox *spinBoxX;
    QLabel *label_3;
    QSpinBox *spinBoxY;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(554, 390);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEditCityName = new QLineEdit(Dialog);
        lineEditCityName->setObjectName("lineEditCityName");

        verticalLayout->addWidget(lineEditCityName);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        spinBoxX = new QSpinBox(Dialog);
        spinBoxX->setObjectName("spinBoxX");
        spinBoxX->setMinimum(-600);
        spinBoxX->setMaximum(600);

        verticalLayout->addWidget(spinBoxX);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        spinBoxY = new QSpinBox(Dialog);
        spinBoxY->setObjectName("spinBoxY");
        spinBoxY->setMinimum(-600);
        spinBoxY->setMaximum(600);

        verticalLayout->addWidget(spinBoxY);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "City Name", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "X Coordinate (Bis 600)", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Y Coordinate (Bis 600)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
