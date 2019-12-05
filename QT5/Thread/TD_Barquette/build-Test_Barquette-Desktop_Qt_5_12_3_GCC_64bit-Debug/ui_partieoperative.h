/********************************************************************************
** Form generated from reading UI file 'partieoperative.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIEOPERATIVE_H
#define UI_PARTIEOPERATIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartieOperative
{
public:
    QGroupBox *groupBox_EtatCapteurs;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_Capteur1;
    QCheckBox *checkBox_Capteur2;
    QCheckBox *checkBox_Capteur3;
    QCheckBox *checkBox_Capteur4;
    QGroupBox *groupBox_Barquette;
    QPushButton *pushButton_NewBarquette;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_NumEjecteur;
    QLabel *label_CodeProduit;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_NumEjecteur;
    QLineEdit *lineEdit_CodeProduit;
    QPushButton *pushButton_DebutProduction;
    QPushButton *pushButton_ArretProduction;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *PartieOperative)
    {
        if (PartieOperative->objectName().isEmpty())
            PartieOperative->setObjectName(QString::fromUtf8("PartieOperative"));
        PartieOperative->resize(431, 312);
        groupBox_EtatCapteurs = new QGroupBox(PartieOperative);
        groupBox_EtatCapteurs->setObjectName(QString::fromUtf8("groupBox_EtatCapteurs"));
        groupBox_EtatCapteurs->setGeometry(QRect(20, 40, 101, 141));
        widget = new QWidget(groupBox_EtatCapteurs);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 85, 108));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_Capteur1 = new QCheckBox(widget);
        checkBox_Capteur1->setObjectName(QString::fromUtf8("checkBox_Capteur1"));

        verticalLayout->addWidget(checkBox_Capteur1);

        checkBox_Capteur2 = new QCheckBox(widget);
        checkBox_Capteur2->setObjectName(QString::fromUtf8("checkBox_Capteur2"));

        verticalLayout->addWidget(checkBox_Capteur2);

        checkBox_Capteur3 = new QCheckBox(widget);
        checkBox_Capteur3->setObjectName(QString::fromUtf8("checkBox_Capteur3"));

        verticalLayout->addWidget(checkBox_Capteur3);

        checkBox_Capteur4 = new QCheckBox(widget);
        checkBox_Capteur4->setObjectName(QString::fromUtf8("checkBox_Capteur4"));

        verticalLayout->addWidget(checkBox_Capteur4);

        groupBox_Barquette = new QGroupBox(PartieOperative);
        groupBox_Barquette->setObjectName(QString::fromUtf8("groupBox_Barquette"));
        groupBox_Barquette->setGeometry(QRect(150, 40, 261, 141));
        pushButton_NewBarquette = new QPushButton(groupBox_Barquette);
        pushButton_NewBarquette->setObjectName(QString::fromUtf8("pushButton_NewBarquette"));
        pushButton_NewBarquette->setGeometry(QRect(80, 110, 121, 24));
        widget1 = new QWidget(groupBox_Barquette);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 30, 231, 58));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_NumEjecteur = new QLabel(widget1);
        label_NumEjecteur->setObjectName(QString::fromUtf8("label_NumEjecteur"));

        verticalLayout_3->addWidget(label_NumEjecteur);

        label_CodeProduit = new QLabel(widget1);
        label_CodeProduit->setObjectName(QString::fromUtf8("label_CodeProduit"));

        verticalLayout_3->addWidget(label_CodeProduit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_NumEjecteur = new QLineEdit(widget1);
        lineEdit_NumEjecteur->setObjectName(QString::fromUtf8("lineEdit_NumEjecteur"));

        verticalLayout_2->addWidget(lineEdit_NumEjecteur);

        lineEdit_CodeProduit = new QLineEdit(widget1);
        lineEdit_CodeProduit->setObjectName(QString::fromUtf8("lineEdit_CodeProduit"));

        verticalLayout_2->addWidget(lineEdit_CodeProduit);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButton_DebutProduction = new QPushButton(PartieOperative);
        pushButton_DebutProduction->setObjectName(QString::fromUtf8("pushButton_DebutProduction"));
        pushButton_DebutProduction->setGeometry(QRect(20, 260, 121, 24));
        pushButton_ArretProduction = new QPushButton(PartieOperative);
        pushButton_ArretProduction->setObjectName(QString::fromUtf8("pushButton_ArretProduction"));
        pushButton_ArretProduction->setGeometry(QRect(170, 260, 121, 24));
        pushButton_Quitter = new QPushButton(PartieOperative);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(330, 260, 80, 24));

        retranslateUi(PartieOperative);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), PartieOperative, SLOT(close()));

        QMetaObject::connectSlotsByName(PartieOperative);
    } // setupUi

    void retranslateUi(QWidget *PartieOperative)
    {
        PartieOperative->setWindowTitle(QApplication::translate("PartieOperative", "PartieOperative", nullptr));
        groupBox_EtatCapteurs->setTitle(QApplication::translate("PartieOperative", "Etat Capteurs", nullptr));
        checkBox_Capteur1->setText(QApplication::translate("PartieOperative", "Capteur 1", nullptr));
        checkBox_Capteur2->setText(QApplication::translate("PartieOperative", "Capteur 2", nullptr));
        checkBox_Capteur3->setText(QApplication::translate("PartieOperative", "Capteur 3", nullptr));
        checkBox_Capteur4->setText(QApplication::translate("PartieOperative", "Capteur 4", nullptr));
        groupBox_Barquette->setTitle(QApplication::translate("PartieOperative", "Barquette", nullptr));
        pushButton_NewBarquette->setText(QApplication::translate("PartieOperative", "Nouvelle Barquette", nullptr));
        label_NumEjecteur->setText(QApplication::translate("PartieOperative", "Num\303\251ro Ejecteur", nullptr));
        label_CodeProduit->setText(QApplication::translate("PartieOperative", "Code Produit", nullptr));
        pushButton_DebutProduction->setText(QApplication::translate("PartieOperative", "D\303\251but Production", nullptr));
        pushButton_ArretProduction->setText(QApplication::translate("PartieOperative", "Arr\303\252t Production", nullptr));
        pushButton_Quitter->setText(QApplication::translate("PartieOperative", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PartieOperative: public Ui_PartieOperative {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIEOPERATIVE_H
