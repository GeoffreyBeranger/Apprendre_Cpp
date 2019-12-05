#include "barquette.h"
#include "ui_barquette.h"

barquette::barquette(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::barquette)
{
    ui->setupUi(this);
}

barquette::~barquette()
{
    delete ui;
}
