#include "serveurbanque.h"
#include "ui_serveurbanque.h"

ServeurBanque::ServeurBanque(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurBanque)
{
    ui->setupUi(this);
}

ServeurBanque::~ServeurBanque()
{
    delete ui;
}
