/********************************************************************************
** Form generated from reading UI file 'bdd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BDD_H
#define UI_BDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BDD
{
public:
    QLineEdit *lineEdit_NumDep;
    QLineEdit *lineEdit_NomDerp;
    QPushButton *pushButton_ObtenirNom;
    QPushButton *pushButton_Quitter;
    QLabel *label_NomDep;
    QLabel *label_NumDep;
    QComboBox *comboBox_Departement;
    QComboBox *comboBox_Ville;
    QComboBox *comboBox_Region;

    void setupUi(QWidget *BDD)
    {
        if (BDD->objectName().isEmpty())
            BDD->setObjectName(QString::fromUtf8("BDD"));
        BDD->resize(400, 300);
        lineEdit_NumDep = new QLineEdit(BDD);
        lineEdit_NumDep->setObjectName(QString::fromUtf8("lineEdit_NumDep"));
        lineEdit_NumDep->setGeometry(QRect(20, 60, 113, 24));
        lineEdit_NomDerp = new QLineEdit(BDD);
        lineEdit_NomDerp->setObjectName(QString::fromUtf8("lineEdit_NomDerp"));
        lineEdit_NomDerp->setGeometry(QRect(230, 60, 113, 24));
        lineEdit_NomDerp->setReadOnly(true);
        pushButton_ObtenirNom = new QPushButton(BDD);
        pushButton_ObtenirNom->setObjectName(QString::fromUtf8("pushButton_ObtenirNom"));
        pushButton_ObtenirNom->setGeometry(QRect(140, 210, 81, 24));
        pushButton_Quitter = new QPushButton(BDD);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(140, 240, 80, 24));
        label_NomDep = new QLabel(BDD);
        label_NomDep->setObjectName(QString::fromUtf8("label_NomDep"));
        label_NomDep->setGeometry(QRect(230, 30, 121, 16));
        label_NumDep = new QLabel(BDD);
        label_NumDep->setObjectName(QString::fromUtf8("label_NumDep"));
        label_NumDep->setGeometry(QRect(10, 30, 141, 16));
        comboBox_Departement = new QComboBox(BDD);
        comboBox_Departement->setObjectName(QString::fromUtf8("comboBox_Departement"));
        comboBox_Departement->setGeometry(QRect(150, 150, 79, 24));
        comboBox_Ville = new QComboBox(BDD);
        comboBox_Ville->setObjectName(QString::fromUtf8("comboBox_Ville"));
        comboBox_Ville->setGeometry(QRect(280, 160, 79, 24));
        comboBox_Region = new QComboBox(BDD);
        comboBox_Region->setObjectName(QString::fromUtf8("comboBox_Region"));
        comboBox_Region->setGeometry(QRect(10, 150, 79, 24));

        retranslateUi(BDD);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), BDD, SLOT(close()));

        QMetaObject::connectSlotsByName(BDD);
    } // setupUi

    void retranslateUi(QWidget *BDD)
    {
        BDD->setWindowTitle(QApplication::translate("BDD", "BDD", nullptr));
        pushButton_ObtenirNom->setText(QApplication::translate("BDD", "Obtenir Nom", nullptr));
        pushButton_Quitter->setText(QApplication::translate("BDD", "Quitter", nullptr));
        label_NomDep->setText(QApplication::translate("BDD", "Nom D\303\251partement", nullptr));
        label_NumDep->setText(QApplication::translate("BDD", "Numero Departement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BDD: public Ui_BDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BDD_H
