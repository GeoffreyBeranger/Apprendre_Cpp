/********************************************************************************
** Form generated from reading UI file 'multiserveur.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISERVEUR_H
#define UI_MULTISERVEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiServeur
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;
    QPushButton *pushButtonLancerServeur;
    QLabel *labelClients;

    void setupUi(QWidget *MultiServeur)
    {
        if (MultiServeur->objectName().isEmpty())
            MultiServeur->setObjectName(QString::fromUtf8("MultiServeur"));
        MultiServeur->resize(400, 300);
        layoutWidget = new QWidget(MultiServeur);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 90, 321, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEditClients = new QTextEdit(layoutWidget);
        textEditClients->setObjectName(QString::fromUtf8("textEditClients"));
        textEditClients->setReadOnly(true);

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(layoutWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);

        layoutWidget_2 = new QWidget(MultiServeur);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(40, 10, 321, 59));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPort = new QLabel(layoutWidget_2);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));

        horizontalLayout->addWidget(labelPort);

        spinBoxPort = new QSpinBox(layoutWidget_2);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMinimum(0);
        spinBoxPort->setMaximum(9999);

        horizontalLayout->addWidget(spinBoxPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(layoutWidget_2);
        pushButtonLancerServeur->setObjectName(QString::fromUtf8("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);

        labelClients = new QLabel(MultiServeur);
        labelClients->setObjectName(QString::fromUtf8("labelClients"));
        labelClients->setGeometry(QRect(40, 70, 58, 16));

        retranslateUi(MultiServeur);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), MultiServeur, SLOT(close()));

        QMetaObject::connectSlotsByName(MultiServeur);
    } // setupUi

    void retranslateUi(QWidget *MultiServeur)
    {
        MultiServeur->setWindowTitle(QApplication::translate("MultiServeur", "MultiServeur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("MultiServeur", "Quitter", nullptr));
        labelPort->setText(QApplication::translate("MultiServeur", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("MultiServeur", "Lancement serveur", nullptr));
        labelClients->setText(QApplication::translate("MultiServeur", "Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiServeur: public Ui_MultiServeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISERVEUR_H
