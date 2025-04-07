/********************************************************************************
** Form generated from reading UI file 'findpath.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPATH_H
#define UI_FINDPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_findPath
{
public:
    QFormLayout *formLayout;
    QComboBox *comboBox_2;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;

    void setupUi(QDialog *findPath)
    {
        if (findPath->objectName().isEmpty())
            findPath->setObjectName("findPath");
        findPath->resize(392, 300);
        formLayout = new QFormLayout(findPath);
        formLayout->setObjectName("formLayout");
        comboBox_2 = new QComboBox(findPath);
        comboBox_2->setObjectName("comboBox_2");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_2);

        buttonBox = new QDialogButtonBox(findPath);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);

        label = new QLabel(findPath);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(true);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        comboBox = new QComboBox(findPath);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(findPath);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_2);


        retranslateUi(findPath);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, findPath, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, findPath, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(findPath);
    } // setupUi

    void retranslateUi(QDialog *findPath)
    {
        findPath->setWindowTitle(QCoreApplication::translate("findPath", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("findPath", "Departure", nullptr));
        label_2->setText(QCoreApplication::translate("findPath", "Destination", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findPath: public Ui_findPath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPATH_H
