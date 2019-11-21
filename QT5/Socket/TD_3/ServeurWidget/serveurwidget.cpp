#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketDialogueClient = new QTcpSocket(this);
    process = new QProcess(this);
    socketEcouteServeur = new QTcpServer(this);

    connect(socketDialogueClient,&QTcpSocket::disconnected,this,&ServeurWidget::onQTcpSocket_disconnected);
    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
    connect(process,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);
}


ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socketEcouteServeur;
    delete socketDialogueClient;
    delete process;
}

void ServeurWidget::on_pushButtonLancerServeur_clicked()
{
    quint16 port = ui->spinBoxPort->text().toInt();
    if(ui->pushButtonLancerServeur->text() == "Lancement serveur"){
        socketEcouteServeur->listen(QHostAddress::Any,port);
        ui->pushButtonLancerServeur->setText("Couper le serveur");
        }else if (ui->pushButtonLancerServeur->text() == "Couper le serveur") {
        ui->pushButtonLancerServeur->setText("Lancement serveur");
        socketEcouteServeur->close();
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
   socketDialogueClient = socketEcouteServeur->nextPendingConnection();
   connect(socketDialogueClient,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);

}

void ServeurWidget::onQTcpSocket_readyRead()
{
    QString reponse;
    QByteArray buffer;
    buffer = socketDialogueClient->readAll();
    QString reception = buffer.data();
    if(reception == "u"){
        reponse = getenv("LOGNAME");
        socketDialogueClient->write(reponse.toLatin1());
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
    ui->textEditClients->append(message);
    }
    if(reception == "c"){
        reponse = QHostInfo::localHostName();
        socketDialogueClient->write(reponse.toLatin1());
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        ui->textEditClients->append(message);
    }
    if(reception == "o"){
        process->start("uname",QStringList("-p"));
    }
    if(reception == "a"){
        process->start("uname");
    }


}

void ServeurWidget::onQTcpSocket_disconnected()
{

}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty()){
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString()+" : " + reponse;
        ui->textEditClients->append(message);
        socketDialogueClient->write(reponse.toLatin1());
    }



}
