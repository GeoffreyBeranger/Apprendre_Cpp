#include "bdd.h"
#include "ui_bdd.h"
#include <QDebug>

BDD::BDD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BDD)
{
    ui->setupUi(this);
    bd = QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.14");
    bd.setDatabaseName("france2015plus");
    bd.setUserName("snir");
    bd.setPassword("snir");

    bd.open();
    QSqlQuery requete("select regions_id,region_nom from regions order by region_nom;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    int id;

    while(requete.next())
    {
        nom=requete.value("region_nom").toString();
        id=requete.value("regions_id").toInt();
        ui->comboBox_Region->addItem(nom,id);
    }
}

BDD::~BDD()
{
    delete ui;
}

void BDD::on_pushButton_ObtenirNom_clicked()
{
    if(!bd.open()){
        qDebug() << " pb acces bdd" << bd.lastError();
    }else{
        qDebug() << " Acces bdd ok";

        QSqlQuery requetePrepare;
        requetePrepare.prepare("select departement_nom from departements where departement_code = :idr ;");
        requetePrepare.bindValue(":idr",ui->lineEdit_NumDep->text());
        if(!requetePrepare.exec()){
            qDebug() << "pb ca a burger chef" << requetePrepare.lastError();
        }else {
            qDebug() << "Nombre de departements dans la région : "
                     << requetePrepare.size();
            QString nomDep;
            while(requetePrepare.next()){
                nomDep = requetePrepare.value("departement_nom").toString();

                qDebug() << nomDep;
            }
            ui->lineEdit_NomDerp->setText(nomDep);
        }
    }




}

void BDD::on_comboBox_Region_currentIndexChanged(int index)
{
    // recupere l'id de la region
    int idRegion=ui->comboBox_Region->itemData(index).toInt();
    // vider la liste des departements
    ui->comboBox_Departement->clear();
    ui->comboBox_Departement->addItem("-Choisissez un département-");

    QSqlQuery requetePrepareDep;
    requetePrepareDep.prepare("select departement_nom, departement_id from departements where departement_region_id = :idr ;");
    requetePrepareDep.bindValue(":idr",idRegion);
    if(!requetePrepareDep.exec()){
        qDebug() << "pb ca a burger chef" << requetePrepareDep.lastError();
    }else {
        qDebug() << "Nombre de departements dans la région : "
                 << requetePrepareDep.size();
        QString nom;
        int id;
        while(requetePrepareDep.next())
        {
            nom=requetePrepareDep.value("departement_nom").toString();
            id=requetePrepareDep.value("departement_id").toInt();
            ui->comboBox_Departement->addItem(nom,id);
        }
    }

}



void BDD::on_comboBox_Departement_currentIndexChanged(int index)
{
    // recupere l'id du departement
    int idDep=ui->comboBox_Departement->itemData(index).toInt();
    // vider la liste des departements
    ui->comboBox_Ville->clear();
    ui->comboBox_Ville->addItem("-Choisissez une ville-");

    QSqlQuery requetePrepareVille;
    requetePrepareVille.prepare("select ville_nom, ville_id from villes where ville_departement_id = :idd ;");
    requetePrepareVille.bindValue(":idd",idDep);
    if(!requetePrepareVille.exec()){
        qDebug() << "pb ca a burger chef" << requetePrepareVille.lastError();
    }else {
        qDebug() << "Nombre de departements dans la région : "
                 << requetePrepareVille.size();
        QString nom;
        int id;
        while(requetePrepareVille.next())
        {
            nom=requetePrepareVille.value("ville_nom").toString();
            id=requetePrepareVille.value("ville_id").toInt();
            ui->comboBox_Ville->addItem(nom,id);
        }
    }
}


