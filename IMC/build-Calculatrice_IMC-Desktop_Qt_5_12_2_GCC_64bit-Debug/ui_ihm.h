/********************************************************************************
** Form generated from reading UI file 'ihm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IHM
{
public:
    QTabWidget *tabWidget;
    QWidget *tabInformationsPerso;
    QPushButton *pushButton_suite;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Nom;
    QLineEdit *lineEdit_Nom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Prenom;
    QLineEdit *lineEdit_Prenom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Sexe;
    QRadioButton *radioButton_Sexe_Homme;
    QRadioButton *radioButton_Sexe_Femme;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Age;
    QSpinBox *spinBox_Age;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Poids;
    QDoubleSpinBox *doubleSpinBox_Poids;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_Taille;
    QDoubleSpinBox *doubleSpinBox_Taille;
    QWidget *tabCalcul;
    QTextEdit *textEdit_Calcul;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Devine;
    QPushButton *pushButton_Lorentz;
    QPushButton *pushButton_Lorentz_Age;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *IHM)
    {
        if (IHM->objectName().isEmpty())
            IHM->setObjectName(QString::fromUtf8("IHM"));
        IHM->setEnabled(true);
        IHM->resize(545, 466);
        IHM->setMinimumSize(QSize(545, 466));
        IHM->setMaximumSize(QSize(545, 466));
        tabWidget = new QTabWidget(IHM);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 40, 451, 371));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabInformationsPerso = new QWidget();
        tabInformationsPerso->setObjectName(QString::fromUtf8("tabInformationsPerso"));
        pushButton_suite = new QPushButton(tabInformationsPerso);
        pushButton_suite->setObjectName(QString::fromUtf8("pushButton_suite"));
        pushButton_suite->setGeometry(QRect(170, 250, 80, 24));
        layoutWidget = new QWidget(tabInformationsPerso);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 60, 274, 189));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Nom = new QLabel(layoutWidget);
        label_Nom->setObjectName(QString::fromUtf8("label_Nom"));

        horizontalLayout->addWidget(label_Nom);

        lineEdit_Nom = new QLineEdit(layoutWidget);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));

        horizontalLayout->addWidget(lineEdit_Nom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Prenom = new QLabel(layoutWidget);
        label_Prenom->setObjectName(QString::fromUtf8("label_Prenom"));

        horizontalLayout_2->addWidget(label_Prenom);

        lineEdit_Prenom = new QLineEdit(layoutWidget);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));

        horizontalLayout_2->addWidget(lineEdit_Prenom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Sexe = new QLabel(layoutWidget);
        label_Sexe->setObjectName(QString::fromUtf8("label_Sexe"));

        horizontalLayout_3->addWidget(label_Sexe);

        radioButton_Sexe_Homme = new QRadioButton(layoutWidget);
        radioButton_Sexe_Homme->setObjectName(QString::fromUtf8("radioButton_Sexe_Homme"));
        radioButton_Sexe_Homme->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_Sexe_Homme);

        radioButton_Sexe_Femme = new QRadioButton(layoutWidget);
        radioButton_Sexe_Femme->setObjectName(QString::fromUtf8("radioButton_Sexe_Femme"));
        radioButton_Sexe_Femme->setCheckable(true);

        horizontalLayout_3->addWidget(radioButton_Sexe_Femme);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_Age = new QLabel(layoutWidget);
        label_Age->setObjectName(QString::fromUtf8("label_Age"));

        horizontalLayout_4->addWidget(label_Age);

        spinBox_Age = new QSpinBox(layoutWidget);
        spinBox_Age->setObjectName(QString::fromUtf8("spinBox_Age"));
        spinBox_Age->setMinimum(1);
        spinBox_Age->setMaximum(200);

        horizontalLayout_4->addWidget(spinBox_Age);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Poids = new QLabel(layoutWidget);
        label_Poids->setObjectName(QString::fromUtf8("label_Poids"));

        horizontalLayout_5->addWidget(label_Poids);

        doubleSpinBox_Poids = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Poids->setObjectName(QString::fromUtf8("doubleSpinBox_Poids"));
        doubleSpinBox_Poids->setMinimum(15.000000000000000);
        doubleSpinBox_Poids->setMaximum(300.000000000000000);
        doubleSpinBox_Poids->setSingleStep(0.010000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_Poids);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_Taille = new QLabel(layoutWidget);
        label_Taille->setObjectName(QString::fromUtf8("label_Taille"));

        horizontalLayout_6->addWidget(label_Taille);

        doubleSpinBox_Taille = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Taille->setObjectName(QString::fromUtf8("doubleSpinBox_Taille"));
        doubleSpinBox_Taille->setMinimum(0.500000000000000);
        doubleSpinBox_Taille->setMaximum(3.000000000000000);
        doubleSpinBox_Taille->setSingleStep(0.010000000000000);

        horizontalLayout_6->addWidget(doubleSpinBox_Taille);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tabInformationsPerso, QString());
        tabCalcul = new QWidget();
        tabCalcul->setObjectName(QString::fromUtf8("tabCalcul"));
        textEdit_Calcul = new QTextEdit(tabCalcul);
        textEdit_Calcul->setObjectName(QString::fromUtf8("textEdit_Calcul"));
        textEdit_Calcul->setGeometry(QRect(10, 20, 431, 221));
        textEdit_Calcul->setReadOnly(true);
        layoutWidget1 = new QWidget(tabCalcul);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 250, 351, 86));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_Devine = new QPushButton(layoutWidget1);
        pushButton_Devine->setObjectName(QString::fromUtf8("pushButton_Devine"));

        verticalLayout_2->addWidget(pushButton_Devine);

        pushButton_Lorentz = new QPushButton(layoutWidget1);
        pushButton_Lorentz->setObjectName(QString::fromUtf8("pushButton_Lorentz"));

        verticalLayout_2->addWidget(pushButton_Lorentz);

        pushButton_Lorentz_Age = new QPushButton(layoutWidget1);
        pushButton_Lorentz_Age->setObjectName(QString::fromUtf8("pushButton_Lorentz_Age"));

        verticalLayout_2->addWidget(pushButton_Lorentz_Age);

        tabWidget->addTab(tabCalcul, QString());
        pushButton_Quitter = new QPushButton(IHM);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(210, 420, 80, 24));

        retranslateUi(IHM);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), IHM, SLOT(close()));
        QObject::connect(pushButton_suite, SIGNAL(clicked()), tabWidget, SLOT(show()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(IHM);
    } // setupUi

    void retranslateUi(QWidget *IHM)
    {
        IHM->setWindowTitle(QApplication::translate("IHM", "IHM", nullptr));
        pushButton_suite->setText(QApplication::translate("IHM", "Suite", nullptr));
        label_Nom->setText(QApplication::translate("IHM", "Nom", nullptr));
        label_Prenom->setText(QApplication::translate("IHM", "Pr\303\251nom", nullptr));
        label_Sexe->setText(QApplication::translate("IHM", "Sexe", nullptr));
        radioButton_Sexe_Homme->setText(QApplication::translate("IHM", "Homme", nullptr));
        radioButton_Sexe_Femme->setText(QApplication::translate("IHM", "Femme", nullptr));
        label_Age->setText(QApplication::translate("IHM", "Age", nullptr));
        label_Poids->setText(QApplication::translate("IHM", "Poids (kg)", nullptr));
        label_Taille->setText(QApplication::translate("IHM", "Taille (m)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInformationsPerso), QApplication::translate("IHM", "Informations Personnelles", nullptr));
        pushButton_Devine->setText(QApplication::translate("IHM", "Poids Id\303\251al formule de Devine", nullptr));
        pushButton_Lorentz->setText(QApplication::translate("IHM", "Poids Id\303\251al formule de Lorentz", nullptr));
        pushButton_Lorentz_Age->setText(QApplication::translate("IHM", "Poids Id\303\251al formule de lorentz en fonction de l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCalcul), QApplication::translate("IHM", "Calcul du poids id\303\251al", nullptr));
        pushButton_Quitter->setText(QApplication::translate("IHM", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IHM: public Ui_IHM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
