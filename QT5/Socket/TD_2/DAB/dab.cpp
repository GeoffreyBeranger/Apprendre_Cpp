#include "dab.h"
#include "ui_dab.h"
#include <QtDebug>
#include <QString>
#include <QListWidget>
#include <QBuffer>


Dab::Dab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dab)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::connected, this, &Dab::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::disconnected, this , &Dab::onQtcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur, &QTcpSocket::readyRead, this , &Dab::onQTcpSocket_readyRead);
    //connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&Dab::onQTcpSocket_error);
}

Dab::~Dab()
{
    delete ui;
    delete socketDeDialogueAvecServeur;
}

void Dab::on_pushButton_Connexion_clicked()
{
    qDebug() << "Connexion Demandée";
    if(ui->pushButton_Connexion->text() == "Connexion")
    {
        QString ip = ui->lineEdit_Adresse->text();
        quint16 port = ui->lineEdit_Port->text().toInt();
        socketDeDialogueAvecServeur->connectToHost(ip,port);
    }
    else if (ui->pushButton_Connexion->text() == "Deconnexion") {
        socketDeDialogueAvecServeur->disconnectFromHost();
        ui->pushButton_Connexion->setText("Connexion");

    }
}

void Dab::onQTcpSocket_connected()
{
    qDebug() << "Connecté au Serveur";
    ui->pushButton_Connexion->setText("Deconnexion");
    ui->listWidget_Etat->insertItem(0,"Connecté au Serveur");
    ui->groupBox->setEnabled(1);
    ui->radioButton_Depot->setEnabled(1);
    ui->radioButton_Solde->setEnabled(1);
    ui->radioButton_Retrait->setEnabled(1);


}

void Dab::onQtcpSocket_disconnected()
{
    qDebug() << "Deconnecté du Serveur";
    ui->pushButton_Connexion->setText("Deconnexion");
    ui->listWidget_Etat->insertItem(0,"Déconnecté du Serveur");
    ui->groupBox->setEnabled(0);

}





void Dab::onQTcpSocket_readyRead()
{
    quint16 taille = 0;
    QString message;

    // si le nombre d'octects recu est au moins egal a celui de la taille de ce que l'on doit recevoir
    if (socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)sizeof(taille))
    {

        QDataStream in(socketDeDialogueAvecServeur);

        in >> taille;

        if(socketDeDialogueAvecServeur->bytesAvailable() >= (qint64)taille)
        {
            // extraire le message de la banque et le mettre dans message
            in >> message;

        }

        ui->lineEdit_MessageBanque->setText(message);

    }

}


void Dab::on_pushButton_NumeroCompte_clicked()
{
    quint16 taille = 0;
    QChar commande = 'N';
    int compte = ui->lineEdit_NumeroCompte->text().toInt();
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);

    QDataStream out(&tampon);

    out << taille << commande << compte;

    taille = tampon.size()-sizeof (taille);

    tampon.seek(0);

    out << taille;

    socketDeDialogueAvecServeur->write(tampon.buffer());
}

void Dab::on_pushButton_Envoi_clicked()
{
    quint16 taille = 0;
    QChar commande;

    if (ui->radioButton_Solde->isChecked())
    {
      commande = 'S';

      float montant = ui->lineEdit_NumeroCompte->text().toFloat();
      QBuffer tampon;
      tampon.open(QIODevice::WriteOnly);

      QDataStream out(&tampon);

      out << taille << commande << montant;

      taille = tampon.size()-sizeof (taille);

      tampon.seek(0);

      out << taille;

      socketDeDialogueAvecServeur->write(tampon.buffer());

    }

    if (ui->radioButton_Depot->isChecked())
    {
      commande = 'D';

      float montant = ui->lineEdit_Montant->text().toFloat();
      QBuffer tampon;
      tampon.open(QIODevice::WriteOnly);

      QDataStream out(&tampon);

      out << taille << commande << montant;

      taille = tampon.size()-sizeof (taille);

      tampon.seek(0);

      out << taille;

      socketDeDialogueAvecServeur->write(tampon.buffer());

    }

    if (ui->radioButton_Retrait->isChecked())
    {
      commande = 'R';

      float montant = ui->lineEdit_Montant->text().toFloat();
      QBuffer tampon;
      tampon.open(QIODevice::WriteOnly);

      QDataStream out(&tampon);

      out << taille << commande << montant;

      taille = tampon.size()-sizeof (taille);

      tampon.seek(0);

      out << taille;

      socketDeDialogueAvecServeur->write(tampon.buffer());

    }


}

//void Dab::onQTcpSocket_error()
//{
//    ui->textEdit_EtatConnexion->append(socketDeDialogueAvecServeur->errorString());
//}

//void Dab::on_pushButton_NomdOrdiDistant_clicked()
//{
//    typeDeDemande = "c";
//    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
//}

//void Dab::on_pushButton_NomUtilisateur_clicked()
//{
//    typeDeDemande = "u";
//    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
//}

//void Dab::on_pushButton_ArchitectureOrdi_clicked()
//{
//    typeDeDemande = "a";
//    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
//}

//void Dab::on_pushButton_OsOrdi_clicked()
//{
//    typeDeDemande = "o";
//    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
//}






