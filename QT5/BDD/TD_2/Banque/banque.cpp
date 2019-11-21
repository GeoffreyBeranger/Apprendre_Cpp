#include "banque.h"
#include "ui_banque.h"

Banque::Banque(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Banque)
{
    ui->setupUi(this);
}

Banque::~Banque()
{
    delete ui;
}
