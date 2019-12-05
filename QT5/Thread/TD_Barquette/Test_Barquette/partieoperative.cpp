#include "partieoperative.h"
#include "ui_partieoperative.h"

PartieOperative::PartieOperative(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PartieOperative),
    capteurs(0)
{
    ui->setupUi(this);


}

PartieOperative::~PartieOperative()
{
    delete ui;
}

void PartieOperative::on_pushButton_NewBarquette_clicked()
{
    quint8 emplacement = ui->lineEdit_NumEjecteur->text().toInt();
    QString codeProduit = ui->lineEdit_CodeProduit->text();
    Barquette *pBarquette = new Barquette(emplacement,codeProduit);
    fileBarquettes.enqueue(pBarquette);




    connect(pBarquette,&Barquette::EjecteurTrouve,this,&PartieOperative::onEjecteurTrouve);
    connect(this,&PartieOperative::CapteurChange,pBarquette,&Barquette::onCapteurChange);
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
    if (ui->checkBox_Capteur1->isChecked() && frontMontant == false)
    {
        if(!fileBarquettes.isEmpty())
        {
            Barquette *pBarquette = fileBarquettes.dequeue();
            tapis.append(pBarquette);
            pBarquette->start();
            frontMontant = true;
        }
    }
    else {
        frontMontant = false;
    }
}



void PartieOperative::onEjecteurTrouve()
{
    qDebug() << "onEjecteurTrouve";
    QMessageBox msgBox;
    Barquette *pBarquette = qobject_cast<Barquette*>(sender());
    int position = tapis.indexOf(pBarquette);
    tapis.removeAt(position);
    QString leCodeProduit = pBarquette->ObtenirCodeBarre();
    QString lEmplacement = QString::number(pBarquette->ObtenirEmplacement());
    msgBox.setText("Barquette "+leCodeProduit+" éjectée en :"+ lEmplacement);
    msgBox.exec();

    disconnect(pBarquette,&Barquette::EjecteurTrouve,this,&PartieOperative::onEjecteurTrouve);
    disconnect(this,&PartieOperative::CapteurChange,pBarquette,&Barquette::onCapteurChange);
    pBarquette->deleteLater();



}



void PartieOperative::on_pushButton_ArretProduction_clicked()
{
    qDebug() << "Timer Stoppé";
    timerPo.stop();
}

void PartieOperative::on_checkBox_Capteur1_stateChanged(int arg1)
{

    if (arg1) {

        capteurs |= 0x01;

    }else {
        capteurs &= ~0x01;

    }
    //qDebug() << capteurs;

    emit CapteurChange(capteurs);
}

void PartieOperative::on_checkBox_Capteur2_stateChanged(int arg1)
{
    if (arg1) {

        capteurs |= 0x02;

    }else {
        capteurs &= ~0x02;

    }
    //qDebug() << capteurs;

    emit CapteurChange(capteurs);

}



void PartieOperative::on_checkBox_Capteur3_stateChanged(int arg1)
{

    if (arg1) {

        capteurs |= 0x04;

    }else {
        capteurs &= ~0x04;

    }
    //qDebug() << capteurs;

    emit CapteurChange(capteurs);
}

void PartieOperative::on_checkBox_Capteur4_stateChanged(int arg1)
{
    if (arg1) {

        capteurs |= 0x08;

    }else {
        capteurs &= ~0x08;

    }
    //qDebug() << capteurs;

    emit CapteurChange(capteurs);
}
