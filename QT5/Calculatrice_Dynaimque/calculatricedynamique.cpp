#include "calculatricedynamique.h"
#include "ui_calculatricedynamique.h"

CalculatriceDynamique::CalculatriceDynamique(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculatriceDynamique)
{
    ui->setupUi(this);
}

CalculatriceDynamique::~CalculatriceDynamique()
{
    delete ui;
}
