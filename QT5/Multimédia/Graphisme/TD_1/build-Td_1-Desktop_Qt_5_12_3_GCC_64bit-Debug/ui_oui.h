/********************************************************************************
** Form generated from reading UI file 'oui.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUI_H
#define UI_OUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Oui
{
public:
    QPushButton *pushButton_Rectangle;
    QPushButton *pushButton_Triangle;
    QPushButton *pushButton_RR;
    QPushButton *pushButton_Cercle;
    QPushButton *pushButton_Etoile;
    QPushButton *pushButton_AfficherTout;
    QPushButton *pushButton_Flocon;

    void setupUi(QWidget *Oui)
    {
        if (Oui->objectName().isEmpty())
            Oui->setObjectName(QString::fromUtf8("Oui"));
        Oui->resize(492, 423);
        pushButton_Rectangle = new QPushButton(Oui);
        pushButton_Rectangle->setObjectName(QString::fromUtf8("pushButton_Rectangle"));
        pushButton_Rectangle->setGeometry(QRect(50, 60, 80, 24));
        pushButton_Triangle = new QPushButton(Oui);
        pushButton_Triangle->setObjectName(QString::fromUtf8("pushButton_Triangle"));
        pushButton_Triangle->setGeometry(QRect(260, 60, 80, 24));
        pushButton_RR = new QPushButton(Oui);
        pushButton_RR->setObjectName(QString::fromUtf8("pushButton_RR"));
        pushButton_RR->setGeometry(QRect(200, 210, 80, 24));
        pushButton_Cercle = new QPushButton(Oui);
        pushButton_Cercle->setObjectName(QString::fromUtf8("pushButton_Cercle"));
        pushButton_Cercle->setGeometry(QRect(70, 210, 80, 24));
        pushButton_Etoile = new QPushButton(Oui);
        pushButton_Etoile->setObjectName(QString::fromUtf8("pushButton_Etoile"));
        pushButton_Etoile->setGeometry(QRect(320, 210, 80, 24));
        pushButton_AfficherTout = new QPushButton(Oui);
        pushButton_AfficherTout->setObjectName(QString::fromUtf8("pushButton_AfficherTout"));
        pushButton_AfficherTout->setGeometry(QRect(170, 300, 80, 24));
        pushButton_Flocon = new QPushButton(Oui);
        pushButton_Flocon->setObjectName(QString::fromUtf8("pushButton_Flocon"));
        pushButton_Flocon->setGeometry(QRect(310, 300, 80, 24));

        retranslateUi(Oui);

        QMetaObject::connectSlotsByName(Oui);
    } // setupUi

    void retranslateUi(QWidget *Oui)
    {
        Oui->setWindowTitle(QApplication::translate("Oui", "Oui", nullptr));
        pushButton_Rectangle->setText(QApplication::translate("Oui", "Rectangle", nullptr));
        pushButton_Triangle->setText(QApplication::translate("Oui", "Triangle", nullptr));
        pushButton_RR->setText(QApplication::translate("Oui", "RR", nullptr));
        pushButton_Cercle->setText(QApplication::translate("Oui", "Cercle", nullptr));
        pushButton_Etoile->setText(QApplication::translate("Oui", "Etoile", nullptr));
        pushButton_AfficherTout->setText(QApplication::translate("Oui", "Tout", nullptr));
        pushButton_Flocon->setText(QApplication::translate("Oui", "Flocon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Oui: public Ui_Oui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUI_H
