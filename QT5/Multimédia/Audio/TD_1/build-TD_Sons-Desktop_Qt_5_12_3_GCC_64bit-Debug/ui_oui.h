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

class Ui_oui
{
public:
    QPushButton *pushButton_ChooseFile;
    QPushButton *pushButton_PlayExternalSound;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *oui)
    {
        if (oui->objectName().isEmpty())
            oui->setObjectName(QString::fromUtf8("oui"));
        oui->resize(400, 300);
        pushButton_ChooseFile = new QPushButton(oui);
        pushButton_ChooseFile->setObjectName(QString::fromUtf8("pushButton_ChooseFile"));
        pushButton_ChooseFile->setGeometry(QRect(20, 140, 111, 24));
        pushButton_PlayExternalSound = new QPushButton(oui);
        pushButton_PlayExternalSound->setObjectName(QString::fromUtf8("pushButton_PlayExternalSound"));
        pushButton_PlayExternalSound->setGeometry(QRect(140, 140, 91, 24));
        pushButton_Quitter = new QPushButton(oui);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(260, 140, 80, 24));

        retranslateUi(oui);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), oui, SLOT(close()));

        QMetaObject::connectSlotsByName(oui);
    } // setupUi

    void retranslateUi(QWidget *oui)
    {
        oui->setWindowTitle(QApplication::translate("oui", "oui", nullptr));
        pushButton_ChooseFile->setText(QApplication::translate("oui", "Choisir Un Fichier", nullptr));
        pushButton_PlayExternalSound->setText(QApplication::translate("oui", "Jouer le Son", nullptr));
        pushButton_Quitter->setText(QApplication::translate("oui", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oui: public Ui_oui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUI_H
