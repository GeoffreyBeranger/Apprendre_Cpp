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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oui
{
public:
    QGraphicsView *graphicsView_1;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QPushButton *pushButton_Animation;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *oui)
    {
        if (oui->objectName().isEmpty())
            oui->setObjectName(QString::fromUtf8("oui"));
        oui->resize(790, 551);
        graphicsView_1 = new QGraphicsView(oui);
        graphicsView_1->setObjectName(QString::fromUtf8("graphicsView_1"));
        graphicsView_1->setGeometry(QRect(10, 10, 381, 241));
        graphicsView_2 = new QGraphicsView(oui);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(400, 10, 381, 241));
        graphicsView_3 = new QGraphicsView(oui);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(10, 260, 381, 241));
        graphicsView_4 = new QGraphicsView(oui);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(400, 260, 381, 241));
        pushButton_Animation = new QPushButton(oui);
        pushButton_Animation->setObjectName(QString::fromUtf8("pushButton_Animation"));
        pushButton_Animation->setGeometry(QRect(310, 510, 80, 24));
        pushButton_Quitter = new QPushButton(oui);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(400, 510, 80, 24));

        retranslateUi(oui);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), oui, SLOT(close()));

        QMetaObject::connectSlotsByName(oui);
    } // setupUi

    void retranslateUi(QWidget *oui)
    {
        oui->setWindowTitle(QApplication::translate("oui", "oui", nullptr));
        pushButton_Animation->setText(QApplication::translate("oui", "Animer", nullptr));
        pushButton_Quitter->setText(QApplication::translate("oui", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oui: public Ui_oui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUI_H
