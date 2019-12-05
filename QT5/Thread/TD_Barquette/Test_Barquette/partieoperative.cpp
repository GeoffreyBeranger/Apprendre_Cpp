#include "partieoperative.h"
#include "ui_partieoperative.h"

PartieOperative::PartieOperative(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PartieOperative)
{
    ui->setupUi(this);


}

PartieOperative::~PartieOperative()
{
    delete ui;
}

void PartieOperative::on_pushButton_NewBarquette_clicked()
{
    int emplacement = ui->lineEdit_NumEjecteur->text().toInt();
    QString codeProduit = ui->lineEdit_CodeProduit->text();
    Barquette *pBarquette = new Barquette(emplacement,codeProduit);
    fileBarquettes.enqueue(pBarquette);

    connect(pBarquette,&Barquette::EjecteurTrouve,this,&PartieOperative::onEjecteurTrouve);
}

void PartieOperative::on_pushButton_DebutProduction_clicked()
{

    timerPo.setInterval(250);
    timerPo.start();
    qDebug() << "Debut timer";
    connect(&timerPo,&QTimer::timeout,this,&PartieOperative::onTimerPo_TimeOut);

}

void PartieOperative::onTimerPo_TimeOut()
{
    qDebug() << "Fin Timer";
    if(!fileBarquettes.isEmpty())
    {

        Barquette * pBarquette  = fileBarquettes.dequeue();
        tapis.append(pBarquette);
        if (ui->checkBox_Capteur1->checkState())
        {

            pBarquette->start();

        }


    }



}



void PartieOperative::onEjecteurTrouve(Barquette pBarquette)
{
    qDebug() << "Ejecteur Trouvé";

    int position;
    QString leCodeProduit;
    bool FinDuThread = false;
    position = tapis.indexOf(&pBarquette);
    tapis.removeAt(position);
    leCodeProduit = pBarquette.ObtenirCodeBarre();
    if(pBarquette.wait())
    {

        pBarquette.~Barquette();

    }


}



void PartieOperative::on_pushButton_ArretProduction_clicked()
{
    timerPo.stop();
}
