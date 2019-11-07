#include "calculatricesd.h"
#include "ui_calculatricesd.h"

CalculatriceSd::CalculatriceSd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceSd)
{
    ui->setupUi(this);
}

CalculatriceSd::~CalculatriceSd()
{
    delete ui;
}
