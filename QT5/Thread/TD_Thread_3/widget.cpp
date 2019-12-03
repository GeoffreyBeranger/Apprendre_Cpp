#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget)
{
    ui->setupUi(this);
}

widget::~widget()
{
    delete ui;
}

void widget::on_pushButton_Threads_clicked()
{

    MonThread *tab[5];
    qDebug() << "nb thread" << MonThread::nbThread;
    for (int i = 0;i<5;i++)
    {

        tab[i] = new MonThread(QString::number(i));

    }
    qDebug() << "nb Thread apres boucle " << MonThread::nbThread;
    for (int i = 0;i<5;i++)
    {

        tab[i]->start();

    }

}
