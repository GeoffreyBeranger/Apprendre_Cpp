/********************************************************************************
** Form generated from reading UI file 'banque.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUE_H
#define UI_BANQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Banque
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *Banque)
    {
        if (Banque->objectName().isEmpty())
            Banque->setObjectName(QString::fromUtf8("Banque"));
        Banque->resize(644, 488);
        groupBox = new QGroupBox(Banque);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 601, 171));
        groupBox_2 = new QGroupBox(Banque);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 190, 621, 281));

        retranslateUi(Banque);

        QMetaObject::connectSlotsByName(Banque);
    } // setupUi

    void retranslateUi(QWidget *Banque)
    {
        Banque->setWindowTitle(QApplication::translate("Banque", "Banque", nullptr));
        groupBox->setTitle(QApplication::translate("Banque", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("Banque", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Banque: public Ui_Banque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUE_H
