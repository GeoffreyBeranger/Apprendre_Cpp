#include "affichage_brique.h"
#include "ui_affichage_brique.h"

Affichage_Brique::Affichage_Brique(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Affichage_Brique)
{
    ui->setupUi(this);
}

Affichage_Brique::~Affichage_Brique()
{
    delete ui;
}
