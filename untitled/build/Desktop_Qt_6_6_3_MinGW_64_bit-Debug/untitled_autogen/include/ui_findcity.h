/********************************************************************************
** Form generated from reading UI file 'findcity.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCITY_H
#define UI_FINDCITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindCity
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditCity;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindCity)
    {
        if (FindCity->objectName().isEmpty())
            FindCity->setObjectName("FindCity");
        FindCity->resize(339, 186);
        verticalLayout = new QVBoxLayout(FindCity);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(FindCity);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEditCity = new QLineEdit(FindCity);
        lineEditCity->setObjectName("lineEditCity");

        verticalLayout->addWidget(lineEditCity);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(FindCity);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(FindCity);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FindCity, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FindCity, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FindCity);
    } // setupUi

    void retranslateUi(QDialog *FindCity)
    {
        FindCity->setWindowTitle(QCoreApplication::translate("FindCity", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FindCity", "City Name: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCity: public Ui_FindCity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCITY_H
