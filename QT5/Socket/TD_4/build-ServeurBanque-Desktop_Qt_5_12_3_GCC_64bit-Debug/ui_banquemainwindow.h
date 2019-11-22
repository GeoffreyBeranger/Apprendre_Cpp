/********************************************************************************
** Form generated from reading UI file 'banquemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUEMAINWINDOW_H
#define UI_BANQUEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BanqueMainWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BanqueMainWindow)
    {
        if (BanqueMainWindow->objectName().isEmpty())
            BanqueMainWindow->setObjectName(QString::fromUtf8("BanqueMainWindow"));
        BanqueMainWindow->resize(400, 300);
        menuBar = new QMenuBar(BanqueMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        BanqueMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BanqueMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BanqueMainWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(BanqueMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BanqueMainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BanqueMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BanqueMainWindow->setStatusBar(statusBar);

        retranslateUi(BanqueMainWindow);

        QMetaObject::connectSlotsByName(BanqueMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BanqueMainWindow)
    {
        BanqueMainWindow->setWindowTitle(QApplication::translate("BanqueMainWindow", "BanqueMainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanqueMainWindow: public Ui_BanqueMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUEMAINWINDOW_H
