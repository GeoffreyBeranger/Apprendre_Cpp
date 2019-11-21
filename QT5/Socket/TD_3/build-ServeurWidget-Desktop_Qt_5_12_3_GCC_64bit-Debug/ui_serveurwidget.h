/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

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

class Ui_ServeurWidget
{
public:
    QLabel *labelClients;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPort;
    QSpinBox *spinBoxPort;
    QPushButton *pushButtonLancerServeur;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditClients;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(342, 293);
        labelClients = new QLabel(ServeurWidget);
        labelClients->setObjectName(QString::fromUtf8("labelClients"));
        labelClients->setGeometry(QRect(10, 70, 58, 16));
        layoutWidget = new QWidget(ServeurWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 321, 59));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelPort = new QLabel(layoutWidget);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));

        horizontalLayout->addWidget(labelPort);

        spinBoxPort = new QSpinBox(layoutWidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setMinimum(0);
        spinBoxPort->setMaximum(9999);

        horizontalLayout->addWidget(spinBoxPort);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonLancerServeur = new QPushButton(layoutWidget);
        pushButtonLancerServeur->setObjectName(QString::fromUtf8("pushButtonLancerServeur"));

        verticalLayout->addWidget(pushButtonLancerServeur);

        layoutWidget1 = new QWidget(ServeurWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 90, 321, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEditClients = new QTextEdit(layoutWidget1);
        textEditClients->setObjectName(QString::fromUtf8("textEditClients"));
        textEditClients->setReadOnly(true);

        verticalLayout_2->addWidget(textEditClients);

        pushButtonQuitter = new QPushButton(layoutWidget1);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        verticalLayout_2->addWidget(pushButtonQuitter);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        labelClients->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        labelPort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
