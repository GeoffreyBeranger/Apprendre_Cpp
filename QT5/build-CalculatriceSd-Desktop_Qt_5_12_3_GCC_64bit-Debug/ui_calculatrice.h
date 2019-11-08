/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QLineEdit *lineEdit_Calcul;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_Moins;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_Multiplier;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Egal;
    QPushButton *pushButton_Diviser;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName(QString::fromUtf8("Calculatrice"));
        Calculatrice->resize(495, 340);
        lineEdit_Calcul = new QLineEdit(Calculatrice);
        lineEdit_Calcul->setObjectName(QString::fromUtf8("lineEdit_Calcul"));
        lineEdit_Calcul->setGeometry(QRect(10, 13, 471, 51));
        widget = new QWidget(Calculatrice);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 70, 471, 261));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_Plus = new QPushButton(widget);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));

        gridLayout->addWidget(pushButton_Plus, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_Moins = new QPushButton(widget);
        pushButton_Moins->setObjectName(QString::fromUtf8("pushButton_Moins"));

        gridLayout->addWidget(pushButton_Moins, 1, 3, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_Multiplier = new QPushButton(widget);
        pushButton_Multiplier->setObjectName(QString::fromUtf8("pushButton_Multiplier"));

        gridLayout->addWidget(pushButton_Multiplier, 2, 3, 1, 1);

        pushButton_Clear = new QPushButton(widget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));

        gridLayout->addWidget(pushButton_Clear, 3, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_Egal = new QPushButton(widget);
        pushButton_Egal->setObjectName(QString::fromUtf8("pushButton_Egal"));

        gridLayout->addWidget(pushButton_Egal, 3, 2, 1, 1);

        pushButton_Diviser = new QPushButton(widget);
        pushButton_Diviser->setObjectName(QString::fromUtf8("pushButton_Diviser"));

        gridLayout->addWidget(pushButton_Diviser, 3, 3, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton_7->setText(QApplication::translate("Calculatrice", "7", nullptr));
        pushButton_8->setText(QApplication::translate("Calculatrice", "8", nullptr));
        pushButton_9->setText(QApplication::translate("Calculatrice", "9", nullptr));
        pushButton_Plus->setText(QApplication::translate("Calculatrice", "+", nullptr));
        pushButton_4->setText(QApplication::translate("Calculatrice", "4", nullptr));
        pushButton_5->setText(QApplication::translate("Calculatrice", "5", nullptr));
        pushButton_6->setText(QApplication::translate("Calculatrice", "6", nullptr));
        pushButton_Moins->setText(QApplication::translate("Calculatrice", "-", nullptr));
        pushButton_1->setText(QApplication::translate("Calculatrice", "1", nullptr));
        pushButton_2->setText(QApplication::translate("Calculatrice", "2", nullptr));
        pushButton_3->setText(QApplication::translate("Calculatrice", "3", nullptr));
        pushButton_Multiplier->setText(QApplication::translate("Calculatrice", "*", nullptr));
        pushButton_Clear->setText(QApplication::translate("Calculatrice", "C", nullptr));
        pushButton_0->setText(QApplication::translate("Calculatrice", "0", nullptr));
        pushButton_Egal->setText(QApplication::translate("Calculatrice", "=", nullptr));
        pushButton_Diviser->setText(QApplication::translate("Calculatrice", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
