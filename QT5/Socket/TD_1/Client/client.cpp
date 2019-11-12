#include "client.h"
#include "ui_client.h"
#include <QtDebug>
#include <QString>

Client::Client(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &Client::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this , &Client::onQtspSocket_disconnected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this , &Client::onQTcpSocket_readyRead);
    connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&Client::onQTcpSocket_error);
}

Client::~Client()
{
    delete ui;
    delete socketDeDialogueAvecServeur;
}

void Client::on_pushButton_Connexion_clicked()
{
    qDebug() << "Connexion Demandée";
    if(ui->pushButton_Connexion->text() == "Connexion")
    {
        QString ip = ui->lineEdit_AdresseIpServeur->text();
        quint16 port = ui->lineEdit_NumeroPortServeur->text().toInt();
        socketDeDialogueAvecServeur->connectToHost(ip,port);
    }
    else if (ui->pushButton_Connexion->text() == "Deconnexion") {
        socketDeDialogueAvecServeur->disconnectFromHost();
        ui->pushButton_Connexion->setText("Connexion");

    }
}

void Client::onQTcpSocket_connected()
{
    qDebug() << "Connecté au Serveur";
    ui->pushButton_Connexion->setText("Deconnexion");
    ui->textEdit_EtatConnexion->clear();
    ui->textEdit_EtatConnexion->append("Connecté au Serveur");
    ui->groupBox_InformationsClient->setEnabled(1);
    ui->lineEdit_AdresseIpServeur->setEnabled(0);
    ui->lineEdit_NumeroPortServeur->setEnabled(0);

}

void Client::onQtspSocket_disconnected()
{
    qDebug() << "Deconnecté du Serveur";
    ui->pushButton_Connexion->setText("Deconnexion");
    ui->textEdit_EtatConnexion->clear();
    ui->textEdit_EtatConnexion->append("Deconnecté du Serveur");
    ui->groupBox_InformationsClient->setEnabled(0);
    ui->lineEdit_AdresseIpServeur->setEnabled(1);
    ui->lineEdit_NumeroPortServeur->setEnabled(1);
}

void Client::onQTcpSocket_readyRead()
{
    qDebug() << "Réponse du Serveur";
    QByteArray buffer;
    buffer = socketDeDialogueAvecServeur->readAll();
    if(typeDeDemande == "c"){
        ui->lineEdit_NomOrdiDistant->setText(buffer);
    }
    if(typeDeDemande == "o"){
        ui->lineEdit_OsOrdi->setText(buffer);
    }
    if(typeDeDemande == "a"){
        ui->lineEdit_ArchitectureORdi->setText(buffer);
    }
    if(typeDeDemande == "u"){
        ui->lineEdit_NonUtilisateur->setText(buffer);
    }
}

void Client::onQTcpSocket_error()
{
    ui->textEdit_EtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}

void Client::on_pushButton_NomdOrdiDistant_clicked()
{
    typeDeDemande = "c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void Client::on_pushButton_NomUtilisateur_clicked()
{
    typeDeDemande = "u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void Client::on_pushButton_ArchitectureOrdi_clicked()
{
    typeDeDemande = "a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void Client::on_pushButton_OsOrdi_clicked()
{
    typeDeDemande = "o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}


