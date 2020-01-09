#include "oui.h"
#include "ui_oui.h"

oui::oui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oui)
{
    ui->setupUi(this);
}

oui::~oui()
{
    delete ui;
}
