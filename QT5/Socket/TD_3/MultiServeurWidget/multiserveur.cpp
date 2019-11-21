#include "multiserveur.h"
#include "ui_multiserveur.h"

MultiServeur::MultiServeur(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MultiServeur)
{
    ui->setupUi(this);

}

MultiServeur::~MultiServeur()
{
    delete ui;
    delete socketEcouteServeur;

}

void MultiServeur::on_pushButtonLancerServeur_clicked()
{
    quint16 port = static_cast<quint16>(ui->spinBoxPort->value());
    if(ui->pushButtonLancerServeur->text() == "Lancement serveur"){
        socketEcouteServeur = new QTcpServer(this);
        socketEcouteServeur->listen(QHostAddress::Any,port);
        connect(socketEcouteServeur,&QTcpServer::newConnection,this,&MultiServeur::onQTcpServer_newConnection);
        ui->pushButtonLancerServeur->setText("Couper le serveur");
    }else if (ui->pushButtonLancerServeur->text() == "Couper le serveur") {
        ui->pushButtonLancerServeur->setText("Lancement serveur");
        // socketEcouteServeur->close();
        delete socketEcouteServeur;
    }
}

void MultiServeur::onQTcpServer_newConnection()
{
    QTcpSocket *client;
       client = socketEcouteServeur->nextPendingConnection();
       connect(client,&QTcpSocket::readyRead,this,&MultiServeur::onQTcpSocket_readyRead);
       socketDialogueClient.append(client);

       QProcess *processClient;
       processClient = new QProcess;
       connect(processClient,&QProcess::readyReadStandardOutput,this,&MultiServeur::onQProcess_readyReadStandardOutput);
       process.append(processClient);
       qDebug() << "nouvelle connexion :  " + client->peerAddress().toString();

}

void MultiServeur::onQTcpSocket_readyRead()
{
    QString reponse;
       QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
       int indexProcess=socketDialogueClient.indexOf(client);
       QByteArray buffer;
       buffer = socketDialogueClient.at(indexProcess)->readAll();
       QString reception = buffer.data();

       if(reception == "u"){
           reponse = getenv("LOGNAME");
           socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
           QString message = "Réponse envoyée à " + socketDialogueClient[indexProcess]->peerAddress().toString()+" : " + reponse;
           ui->textEditClients->append(message);
       }
       if(reception == "c"){
           reponse = QHostInfo::localHostName();
           socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
           QString message = "Réponse envoyée à " + socketDialogueClient[indexProcess]->peerAddress().toString()+" : " + reponse;
           ui->textEditClients->append(message);
       }
       if(reception == "o"){
           process.at(indexProcess)->start("uname",QStringList("-p"));
       }
       if(reception == "a"){
           process.at(indexProcess)->start("uname");
       }
}

void MultiServeur::onQTcpSocket_disconnected()
{
    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
    int indexProcess=socketDialogueClient.indexOf(client);
    process.removeAt(indexProcess);
    qDebug() << "deconnexion :  " + client->peerAddress().toString();
}

void MultiServeur::onQProcess_readyReadStandardOutput()
{
    QProcess* processClient = qobject_cast<QProcess*>(sender());
       int indexProcess=process.indexOf(processClient);
       QString reponse = process[indexProcess]->readAllStandardOutput();
       if(!reponse.isEmpty()){
           QString message = "Réponse envoyée à " + socketDialogueClient[indexProcess]->peerAddress().toString()+" : " + reponse;
           ui->textEditClients->append(message);
           socketDialogueClient[indexProcess]->write(reponse.toLatin1());
       }
}
