#include "thread.h"
#include "ui_thread.h"

Thread::Thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Thread)
{
    ui->setupUi(this);
}

Thread::~Thread()
{
    delete ui;
}
