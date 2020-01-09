#include "cassebrique.h"
#include "ui_cassebrique.h"

CasseBrique::CasseBrique(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CasseBrique)
{
    ui->setupUi(this);
}

CasseBrique::~CasseBrique()
{
    delete ui;
}
