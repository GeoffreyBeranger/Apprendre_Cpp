/********************************************************************************
** Form generated from reading UI file 'dab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_H
#define UI_DAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dab
{
public:
    QLabel *label_EtatConnexion;
    QLabel *label_MessageBanque;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_Solde;
    QRadioButton *radioButton_Retrait;
    QRadioButton *radioButton_Depot;
    QPushButton *pushButton_Envoi;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_NumeroCompte;
    QLineEdit *lineEdit_NumeroCompte;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Montant;
    QLineEdit *lineEdit_Montant;
    QLineEdit *lineEdit_MessageBanque;
    QPushButton *pushButton_Connexion;
    QSplitter *splitter;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Adresse;
    QLabel *label_Port;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_Adresse;
    QLineEdit *lineEdit_Port;
    QListWidget *listWidget_Etat;

    void setupUi(QWidget *Dab)
    {
        if (Dab->objectName().isEmpty())
            Dab->setObjectName(QString::fromUtf8("Dab"));
        Dab->resize(602, 427);
        label_EtatConnexion = new QLabel(Dab);
        label_EtatConnexion->setObjectName(QString::fromUtf8("label_EtatConnexion"));
        label_EtatConnexion->setGeometry(QRect(350, 30, 171, 16));
        label_MessageBanque = new QLabel(Dab);
        label_MessageBanque->setObjectName(QString::fromUtf8("label_MessageBanque"));
        label_MessageBanque->setGeometry(QRect(30, 160, 161, 16));
        groupBox = new QGroupBox(Dab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setGeometry(QRect(30, 220, 541, 151));
        groupBox->setCheckable(false);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 30, 82, 112));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_Solde = new QRadioButton(layoutWidget);
        radioButton_Solde->setObjectName(QString::fromUtf8("radioButton_Solde"));
        radioButton_Solde->setEnabled(false);
        radioButton_Solde->setChecked(true);

        verticalLayout->addWidget(radioButton_Solde);

        radioButton_Retrait = new QRadioButton(layoutWidget);
        radioButton_Retrait->setObjectName(QString::fromUtf8("radioButton_Retrait"));

        verticalLayout->addWidget(radioButton_Retrait);

        radioButton_Depot = new QRadioButton(layoutWidget);
        radioButton_Depot->setObjectName(QString::fromUtf8("radioButton_Depot"));
        radioButton_Depot->setEnabled(false);

        verticalLayout->addWidget(radioButton_Depot);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Envoi = new QPushButton(layoutWidget);
        pushButton_Envoi->setObjectName(QString::fromUtf8("pushButton_Envoi"));

        verticalLayout_2->addWidget(pushButton_Envoi);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 261, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_NumeroCompte = new QPushButton(layoutWidget1);
        pushButton_NumeroCompte->setObjectName(QString::fromUtf8("pushButton_NumeroCompte"));

        horizontalLayout->addWidget(pushButton_NumeroCompte);

        lineEdit_NumeroCompte = new QLineEdit(layoutWidget1);
        lineEdit_NumeroCompte->setObjectName(QString::fromUtf8("lineEdit_NumeroCompte"));

        horizontalLayout->addWidget(lineEdit_NumeroCompte);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Montant = new QLabel(layoutWidget1);
        label_Montant->setObjectName(QString::fromUtf8("label_Montant"));

        horizontalLayout_2->addWidget(label_Montant);

        lineEdit_Montant = new QLineEdit(layoutWidget1);
        lineEdit_Montant->setObjectName(QString::fromUtf8("lineEdit_Montant"));

        horizontalLayout_2->addWidget(lineEdit_Montant);


        verticalLayout_3->addLayout(horizontalLayout_2);

        lineEdit_MessageBanque = new QLineEdit(Dab);
        lineEdit_MessageBanque->setObjectName(QString::fromUtf8("lineEdit_MessageBanque"));
        lineEdit_MessageBanque->setGeometry(QRect(30, 180, 541, 24));
        lineEdit_MessageBanque->setReadOnly(true);
        pushButton_Connexion = new QPushButton(Dab);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));
        pushButton_Connexion->setGeometry(QRect(160, 110, 80, 24));
        splitter = new QSplitter(Dab);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 30, 291, 71));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_Adresse = new QLabel(layoutWidget2);
        label_Adresse->setObjectName(QString::fromUtf8("label_Adresse"));

        verticalLayout_5->addWidget(label_Adresse);

        label_Port = new QLabel(layoutWidget2);
        label_Port->setObjectName(QString::fromUtf8("label_Port"));

        verticalLayout_5->addWidget(label_Port);

        splitter->addWidget(layoutWidget2);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_Adresse = new QLineEdit(layoutWidget3);
        lineEdit_Adresse->setObjectName(QString::fromUtf8("lineEdit_Adresse"));

        verticalLayout_6->addWidget(lineEdit_Adresse);

        lineEdit_Port = new QLineEdit(layoutWidget3);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));

        verticalLayout_6->addWidget(lineEdit_Port);

        splitter->addWidget(layoutWidget3);
        listWidget_Etat = new QListWidget(Dab);
        listWidget_Etat->setObjectName(QString::fromUtf8("listWidget_Etat"));
        listWidget_Etat->setGeometry(QRect(340, 50, 211, 121));

        retranslateUi(Dab);

        QMetaObject::connectSlotsByName(Dab);
    } // setupUi

    void retranslateUi(QWidget *Dab)
    {
        Dab->setWindowTitle(QApplication::translate("Dab", "Dab", nullptr));
        label_EtatConnexion->setText(QApplication::translate("Dab", "\303\211tat de la connexion", nullptr));
        label_MessageBanque->setText(QApplication::translate("Dab", "Message de la Banque :", nullptr));
        groupBox->setTitle(QApplication::translate("Dab", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        radioButton_Solde->setText(QApplication::translate("Dab", "Solde", nullptr));
        radioButton_Retrait->setText(QApplication::translate("Dab", "Retrait", nullptr));
        radioButton_Depot->setText(QApplication::translate("Dab", "D\303\251pot", nullptr));
        pushButton_Envoi->setText(QApplication::translate("Dab", "Envoi", nullptr));
        pushButton_NumeroCompte->setText(QApplication::translate("Dab", "Num\303\251ro de Compte", nullptr));
        label_Montant->setText(QApplication::translate("Dab", "Montant :", nullptr));
        pushButton_Connexion->setText(QApplication::translate("Dab", "Connexion", nullptr));
        label_Adresse->setText(QApplication::translate("Dab", "Adresse :", nullptr));
        label_Port->setText(QApplication::translate("Dab", "Port :", nullptr));
        lineEdit_Adresse->setText(QApplication::translate("Dab", "172.18.58.104", nullptr));
        lineEdit_Port->setText(QApplication::translate("Dab", "8888", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dab: public Ui_Dab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_H
