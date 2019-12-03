/********************************************************************************
** Form generated from reading UI file 'ini.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INI_H
#define UI_INI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ini
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *ini)
    {
        if (ini->objectName().isEmpty())
            ini->setObjectName(QString::fromUtf8("ini"));
        ini->resize(400, 300);
        pushButton = new QPushButton(ini);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 130, 80, 24));

        retranslateUi(ini);

        QMetaObject::connectSlotsByName(ini);
    } // setupUi

    void retranslateUi(QWidget *ini)
    {
        ini->setWindowTitle(QApplication::translate("ini", "ini", nullptr));
        pushButton->setText(QApplication::translate("ini", "NON", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ini: public Ui_ini {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INI_H
