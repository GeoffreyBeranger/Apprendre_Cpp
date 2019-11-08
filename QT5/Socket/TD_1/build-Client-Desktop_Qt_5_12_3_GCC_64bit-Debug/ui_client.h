/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QGroupBox *groupBox_ConnexionServeur;
    QPushButton *pushButton_Connexion;
    QTextEdit *textEdit_EtatConnexion;
    QPushButton *pushButton_Quitter;
    QLabel *label_EtatConnexion;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_AdresseIp;
    QLineEdit *lineEdit_AdresseIpServeur;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_NumeroPortServeur;
    QLineEdit *lineEdit_NumeroPortServeur;
    QGroupBox *groupBox_InformationsClient;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_NomdOrdiDistant;
    QPushButton *pushButton_NomUtilisateur;
    QPushButton *pushButton_ArchitectureOrdi;
    QPushButton *pushButton_OsOrdi;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_NomOrdiDistant;
    QLineEdit *lineEdit_NonUtilisateur;
    QLineEdit *lineEdit_ArchitectureORdi;
    QLineEdit *lineEdit_OsOrdi;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(560, 340);
        groupBox_ConnexionServeur = new QGroupBox(Client);
        groupBox_ConnexionServeur->setObjectName(QString::fromUtf8("groupBox_ConnexionServeur"));
        groupBox_ConnexionServeur->setGeometry(QRect(10, 10, 541, 151));
        pushButton_Connexion = new QPushButton(groupBox_ConnexionServeur);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));
        pushButton_Connexion->setGeometry(QRect(160, 110, 80, 24));
        textEdit_EtatConnexion = new QTextEdit(groupBox_ConnexionServeur);
        textEdit_EtatConnexion->setObjectName(QString::fromUtf8("textEdit_EtatConnexion"));
        textEdit_EtatConnexion->setEnabled(true);
        textEdit_EtatConnexion->setGeometry(QRect(340, 49, 191, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("URW Bookman L"));
        font.setBold(true);
        font.setWeight(75);
        textEdit_EtatConnexion->setFont(font);
        textEdit_EtatConnexion->setMouseTracking(false);
        textEdit_EtatConnexion->setReadOnly(true);
        pushButton_Quitter = new QPushButton(groupBox_ConnexionServeur);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(10, 110, 80, 24));
        label_EtatConnexion = new QLabel(groupBox_ConnexionServeur);
        label_EtatConnexion->setObjectName(QString::fromUtf8("label_EtatConnexion"));
        label_EtatConnexion->setGeometry(QRect(340, 30, 131, 16));
        widget = new QWidget(groupBox_ConnexionServeur);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 296, 60));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_AdresseIp = new QLabel(widget);
        label_AdresseIp->setObjectName(QString::fromUtf8("label_AdresseIp"));

        horizontalLayout->addWidget(label_AdresseIp);

        lineEdit_AdresseIpServeur = new QLineEdit(widget);
        lineEdit_AdresseIpServeur->setObjectName(QString::fromUtf8("lineEdit_AdresseIpServeur"));

        horizontalLayout->addWidget(lineEdit_AdresseIpServeur);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_NumeroPortServeur = new QLabel(widget);
        label_NumeroPortServeur->setObjectName(QString::fromUtf8("label_NumeroPortServeur"));

        horizontalLayout_2->addWidget(label_NumeroPortServeur);

        lineEdit_NumeroPortServeur = new QLineEdit(widget);
        lineEdit_NumeroPortServeur->setObjectName(QString::fromUtf8("lineEdit_NumeroPortServeur"));

        horizontalLayout_2->addWidget(lineEdit_NumeroPortServeur);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_InformationsClient = new QGroupBox(Client);
        groupBox_InformationsClient->setObjectName(QString::fromUtf8("groupBox_InformationsClient"));
        groupBox_InformationsClient->setGeometry(QRect(10, 160, 541, 171));
        widget1 = new QWidget(groupBox_InformationsClient);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 30, 531, 131));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton_NomdOrdiDistant = new QPushButton(widget1);
        pushButton_NomdOrdiDistant->setObjectName(QString::fromUtf8("pushButton_NomdOrdiDistant"));

        verticalLayout_3->addWidget(pushButton_NomdOrdiDistant);

        pushButton_NomUtilisateur = new QPushButton(widget1);
        pushButton_NomUtilisateur->setObjectName(QString::fromUtf8("pushButton_NomUtilisateur"));

        verticalLayout_3->addWidget(pushButton_NomUtilisateur);

        pushButton_ArchitectureOrdi = new QPushButton(widget1);
        pushButton_ArchitectureOrdi->setObjectName(QString::fromUtf8("pushButton_ArchitectureOrdi"));

        verticalLayout_3->addWidget(pushButton_ArchitectureOrdi);

        pushButton_OsOrdi = new QPushButton(widget1);
        pushButton_OsOrdi->setObjectName(QString::fromUtf8("pushButton_OsOrdi"));

        verticalLayout_3->addWidget(pushButton_OsOrdi);


        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_NomOrdiDistant = new QLineEdit(widget1);
        lineEdit_NomOrdiDistant->setObjectName(QString::fromUtf8("lineEdit_NomOrdiDistant"));

        verticalLayout_2->addWidget(lineEdit_NomOrdiDistant);

        lineEdit_NonUtilisateur = new QLineEdit(widget1);
        lineEdit_NonUtilisateur->setObjectName(QString::fromUtf8("lineEdit_NonUtilisateur"));

        verticalLayout_2->addWidget(lineEdit_NonUtilisateur);

        lineEdit_ArchitectureORdi = new QLineEdit(widget1);
        lineEdit_ArchitectureORdi->setObjectName(QString::fromUtf8("lineEdit_ArchitectureORdi"));

        verticalLayout_2->addWidget(lineEdit_ArchitectureORdi);

        lineEdit_OsOrdi = new QLineEdit(widget1);
        lineEdit_OsOrdi->setObjectName(QString::fromUtf8("lineEdit_OsOrdi"));

        verticalLayout_2->addWidget(lineEdit_OsOrdi);


        horizontalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(Client);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), Client, SLOT(close()));

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", nullptr));
        groupBox_ConnexionServeur->setTitle(QApplication::translate("Client", "Connexion au Serveur", nullptr));
        pushButton_Connexion->setText(QApplication::translate("Client", "Connexion", nullptr));
        pushButton_Quitter->setText(QApplication::translate("Client", "Quitter", nullptr));
        label_EtatConnexion->setText(QApplication::translate("Client", "Etat de la connexion", nullptr));
        label_AdresseIp->setText(QApplication::translate("Client", "Adresse Ip du Serveur", nullptr));
        lineEdit_AdresseIpServeur->setText(QApplication::translate("Client", "172.18.58.83", nullptr));
        label_NumeroPortServeur->setText(QApplication::translate("Client", "Num\303\251ro de port du serveur", nullptr));
        lineEdit_NumeroPortServeur->setText(QApplication::translate("Client", "8888", nullptr));
        groupBox_InformationsClient->setTitle(QApplication::translate("Client", "Informations Client", nullptr));
        pushButton_NomdOrdiDistant->setText(QApplication::translate("Client", "Nom de l'Ordinateur distant", nullptr));
        pushButton_NomUtilisateur->setText(QApplication::translate("Client", "Nom de l'Utilisateur", nullptr));
        pushButton_ArchitectureOrdi->setText(QApplication::translate("Client", "Architecture de l'Ordinateur", nullptr));
        pushButton_OsOrdi->setText(QApplication::translate("Client", "OS de l'Ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
