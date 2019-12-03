#include "ini.h"
#include "ui_ini.h"

ini::ini(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ini)
{
    ui->setupUi(this);
}

ini::~ini()
{
    delete ui;
}

void ini::on_pushButton_clicked()
{

    QString adresseIp;
    int numeroPort;
    QChar h,d,j;
    QString nomFichierIni = qApp->applicationName()+".ini";
    QFileInfo testFichier(nomFichierIni);

    if(testFichier.exists()  && testFichier.isFile())
    {

        QSettings paramSocket(nomFichierIni, QSettings::IniFormat);

        adresseIp = paramSocket.value("CONFIG/ip").toString();
        numeroPort = paramSocket.value("CONFIG/port").toInt();
        d = paramSocket.value("COMMANDES/date").toString().at(0);
        h = paramSocket.value("COMMANDES/heure").toString().at(0);
        j = paramSocket.value("COMMANDES/jour").toString().at(0);
        qDebug() << adresseIp<<numeroPort<<h<<d<<j;

    }
    else
    {

        qDebug() << "Fichier ini non valide";

    }

}
