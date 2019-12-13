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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oui
{
public:
    QPushButton *pushButton_Quitter;
    QPushButton *pushButton_OuvrirPortSerie;
    QPushButton *pushButton_Envoyer;
    QComboBox *comboBox_Port;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_TexteEnvoyer;
    QTextEdit *textEdit_TexteRecu;

    void setupUi(QWidget *oui)
    {
        if (oui->objectName().isEmpty())
            oui->setObjectName(QString::fromUtf8("oui"));
        oui->resize(636, 509);
        pushButton_Quitter = new QPushButton(oui);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(10, 470, 611, 31));
        pushButton_OuvrirPortSerie = new QPushButton(oui);
        pushButton_OuvrirPortSerie->setObjectName(QString::fromUtf8("pushButton_OuvrirPortSerie"));
        pushButton_OuvrirPortSerie->setGeometry(QRect(310, 30, 311, 24));
        pushButton_Envoyer = new QPushButton(oui);
        pushButton_Envoyer->setObjectName(QString::fromUtf8("pushButton_Envoyer"));
        pushButton_Envoyer->setGeometry(QRect(540, 70, 80, 24));
        comboBox_Port = new QComboBox(oui);
        comboBox_Port->addItem(QString());
        comboBox_Port->setObjectName(QString::fromUtf8("comboBox_Port"));
        comboBox_Port->setGeometry(QRect(10, 30, 291, 24));
        label = new QLabel(oui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 101, 20));
        label_2 = new QLabel(oui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 71, 16));
        lineEdit_TexteEnvoyer = new QLineEdit(oui);
        lineEdit_TexteEnvoyer->setObjectName(QString::fromUtf8("lineEdit_TexteEnvoyer"));
        lineEdit_TexteEnvoyer->setGeometry(QRect(122, 70, 411, 24));
        textEdit_TexteRecu = new QTextEdit(oui);
        textEdit_TexteRecu->setObjectName(QString::fromUtf8("textEdit_TexteRecu"));
        textEdit_TexteRecu->setGeometry(QRect(10, 130, 611, 331));

        retranslateUi(oui);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), oui, SLOT(close()));

        QMetaObject::connectSlotsByName(oui);
    } // setupUi

    void retranslateUi(QWidget *oui)
    {
        oui->setWindowTitle(QApplication::translate("oui", "oui", nullptr));
        pushButton_Quitter->setText(QApplication::translate("oui", "Quitter", nullptr));
        pushButton_OuvrirPortSerie->setText(QApplication::translate("oui", "Ouvrir le Port S\303\251rie", nullptr));
        pushButton_Envoyer->setText(QApplication::translate("oui", "Envoyer", nullptr));
        comboBox_Port->setItemText(0, QApplication::translate("oui", "Choisissez un Port S\303\251rie", nullptr));

        comboBox_Port->setCurrentText(QApplication::translate("oui", "Choisissez un Port S\303\251rie", nullptr));
        label->setText(QApplication::translate("oui", "Texte \303\240 Envoyer", nullptr));
        label_2->setText(QApplication::translate("oui", "Texte Re\303\247u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oui: public Ui_oui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUI_H
