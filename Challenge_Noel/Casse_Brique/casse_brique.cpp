#include "casse_brique.h"
#include "ui_casse_brique.h"

Casse_Brique::Casse_Brique(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Casse_Brique)
{
    ui->setupUi(this);
}

Casse_Brique::~Casse_Brique()
{
    delete ui;
}
