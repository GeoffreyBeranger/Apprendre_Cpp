/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
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

class Ui_calculatrice
{
public:
    QLineEdit *lineEdit_Calcul;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton0_9;
    QPushButton *pushButton0_8;
    QPushButton *pushButton0_7;
    QPushButton *pushButton_Plus;
    QPushButton *pushButton0_6;
    QPushButton *pushButton0_5;
    QPushButton *pushButton0_4;
    QPushButton *pushButton_Moins;
    QPushButton *pushButton0_3;
    QPushButton *pushButton0_2;
    QPushButton *pushButton0_1;
    QPushButton *pushButton_Multiplier;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton0;
    QPushButton *pushButton_Egal;
    QPushButton *pushButton_DIviser;

    void setupUi(QWidget *calculatrice)
    {
        if (calculatrice->objectName().isEmpty())
            calculatrice->setObjectName(QString::fromUtf8("calculatrice"));
        calculatrice->resize(400, 300);
        lineEdit_Calcul = new QLineEdit(calculatrice);
        lineEdit_Calcul->setObjectName(QString::fromUtf8("lineEdit_Calcul"));
        lineEdit_Calcul->setGeometry(QRect(10, 10, 381, 41));
        lineEdit_Calcul->setLayoutDirection(Qt::RightToLeft);
        lineEdit_Calcul->setReadOnly(true);
        widget = new QWidget(calculatrice);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 60, 381, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton0_9 = new QPushButton(widget);
        pushButton0_9->setObjectName(QString::fromUtf8("pushButton0_9"));

        gridLayout->addWidget(pushButton0_9, 0, 0, 1, 1);

        pushButton0_8 = new QPushButton(widget);
        pushButton0_8->setObjectName(QString::fromUtf8("pushButton0_8"));

        gridLayout->addWidget(pushButton0_8, 0, 1, 1, 1);

        pushButton0_7 = new QPushButton(widget);
        pushButton0_7->setObjectName(QString::fromUtf8("pushButton0_7"));

        gridLayout->addWidget(pushButton0_7, 0, 2, 1, 1);

        pushButton_Plus = new QPushButton(widget);
        pushButton_Plus->setObjectName(QString::fromUtf8("pushButton_Plus"));

        gridLayout->addWidget(pushButton_Plus, 0, 3, 1, 1);

        pushButton0_6 = new QPushButton(widget);
        pushButton0_6->setObjectName(QString::fromUtf8("pushButton0_6"));

        gridLayout->addWidget(pushButton0_6, 1, 0, 1, 1);

        pushButton0_5 = new QPushButton(widget);
        pushButton0_5->setObjectName(QString::fromUtf8("pushButton0_5"));

        gridLayout->addWidget(pushButton0_5, 1, 1, 1, 1);

        pushButton0_4 = new QPushButton(widget);
        pushButton0_4->setObjectName(QString::fromUtf8("pushButton0_4"));

        gridLayout->addWidget(pushButton0_4, 1, 2, 1, 1);

        pushButton_Moins = new QPushButton(widget);
        pushButton_Moins->setObjectName(QString::fromUtf8("pushButton_Moins"));

        gridLayout->addWidget(pushButton_Moins, 1, 3, 1, 1);

        pushButton0_3 = new QPushButton(widget);
        pushButton0_3->setObjectName(QString::fromUtf8("pushButton0_3"));

        gridLayout->addWidget(pushButton0_3, 2, 0, 1, 1);

        pushButton0_2 = new QPushButton(widget);
        pushButton0_2->setObjectName(QString::fromUtf8("pushButton0_2"));

        gridLayout->addWidget(pushButton0_2, 2, 1, 1, 1);

        pushButton0_1 = new QPushButton(widget);
        pushButton0_1->setObjectName(QString::fromUtf8("pushButton0_1"));

        gridLayout->addWidget(pushButton0_1, 2, 2, 1, 1);

        pushButton_Multiplier = new QPushButton(widget);
        pushButton_Multiplier->setObjectName(QString::fromUtf8("pushButton_Multiplier"));

        gridLayout->addWidget(pushButton_Multiplier, 2, 3, 1, 1);

        pushButton_Clear = new QPushButton(widget);
        pushButton_Clear->setObjectName(QString::fromUtf8("pushButton_Clear"));

        gridLayout->addWidget(pushButton_Clear, 3, 0, 1, 1);

        pushButton0 = new QPushButton(widget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        gridLayout->addWidget(pushButton0, 3, 1, 1, 1);

        pushButton_Egal = new QPushButton(widget);
        pushButton_Egal->setObjectName(QString::fromUtf8("pushButton_Egal"));

        gridLayout->addWidget(pushButton_Egal, 3, 2, 1, 1);

        pushButton_DIviser = new QPushButton(widget);
        pushButton_DIviser->setObjectName(QString::fromUtf8("pushButton_DIviser"));

        gridLayout->addWidget(pushButton_DIviser, 3, 3, 1, 1);


        retranslateUi(calculatrice);

        QMetaObject::connectSlotsByName(calculatrice);
    } // setupUi

    void retranslateUi(QWidget *calculatrice)
    {
        calculatrice->setWindowTitle(QApplication::translate("calculatrice", "calculatrice", nullptr));
        pushButton0_9->setText(QApplication::translate("calculatrice", "9", nullptr));
        pushButton0_8->setText(QApplication::translate("calculatrice", "8", nullptr));
        pushButton0_7->setText(QApplication::translate("calculatrice", "7", nullptr));
        pushButton_Plus->setText(QApplication::translate("calculatrice", "+", nullptr));
        pushButton0_6->setText(QApplication::translate("calculatrice", "6", nullptr));
        pushButton0_5->setText(QApplication::translate("calculatrice", "5", nullptr));
        pushButton0_4->setText(QApplication::translate("calculatrice", "4", nullptr));
        pushButton_Moins->setText(QApplication::translate("calculatrice", "-", nullptr));
        pushButton0_3->setText(QApplication::translate("calculatrice", "3", nullptr));
        pushButton0_2->setText(QApplication::translate("calculatrice", "2", nullptr));
        pushButton0_1->setText(QApplication::translate("calculatrice", "1", nullptr));
        pushButton_Multiplier->setText(QApplication::translate("calculatrice", "*", nullptr));
        pushButton_Clear->setText(QApplication::translate("calculatrice", "C", nullptr));
        pushButton0->setText(QApplication::translate("calculatrice", "0", nullptr));
        pushButton_Egal->setText(QApplication::translate("calculatrice", "=", nullptr));
        pushButton_DIviser->setText(QApplication::translate("calculatrice", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatrice: public Ui_calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
