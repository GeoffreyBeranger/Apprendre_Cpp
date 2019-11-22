#include "banquemainwindow.h"
#include "ui_banquemainwindow.h"

BanqueMainWindow::BanqueMainWindow(ServeurBanque* _leServeur, QWidget * parent) :
    leServeur(_leServeur),
    QMainWindow(parent),
    ui(new Ui::BanqueMainWindow)
{
    ui->setupUi(this);
}


BanqueMainWindow::~BanqueMainWindow()
{
    delete ui;
}
