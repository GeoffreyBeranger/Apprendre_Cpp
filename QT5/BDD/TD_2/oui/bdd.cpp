#include "bdd.h"
#include "ui_bdd.h"
#include <QDebug>

BDD::BDD(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BDD)
{
    ui->setupUi(this);
    bd = QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.7");
    bd.setDatabaseName("france2018");
    bd.setUserName("snir");
    bd.setPassword("snir");
    bd.open();


    QSqlQuery requete("select distinct code,name from regions order by name;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString name;
    QString code;

    ui->comboBox_Region->addItem("-Choisissez un Région-");

    while(requete.next())
    {
        name = requete.value("name").toString();
        code = requete.value("code").toString();
        ui->comboBox_Region->addItem(name,code);
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

        QString code;

        if(ui->lineEdit_NumDep->text().toInt()<10)
        {

            code = "0" + ui->lineEdit_NumDep->text();

        }

        QSqlQuery requetePrepare;
        requetePrepare.prepare("select distinct name from departments where department_code = :idr ;");
        requetePrepare.bindValue(":idr",code);
        if(!requetePrepare.exec()){
            qDebug() << "pb ca a burger chef" << requetePrepare.lastError();
        }else {
            qDebug() << "Nombre de departements dans la région : "
                     << requetePrepare.size();
            QString nomDep;
            while(requetePrepare.next()){
                nomDep = requetePrepare.value("name").toString();

                qDebug() << nomDep;
            }
            ui->lineEdit_NomDerp->setText(nomDep);
        }
    }




}

void BDD::on_comboBox_Region_currentIndexChanged(int index)
{
    // recupere l'id de la region
    QString idRegion = ui->comboBox_Region->itemData(index).toString();
    // vider la liste des departements
    ui->comboBox_Departement->clear();
    ui->comboBox_Departement->addItem("-Choisissez un département-");

    QSqlQuery requetePrepareDep;
    requetePrepareDep.prepare("select distinct name,code from departments where region_code =:idr ;");
    requetePrepareDep.bindValue(":idr",idRegion);
    if(!requetePrepareDep.exec()){
        qDebug() << "pb ca a burger chef" << requetePrepareDep.lastError();
    }else {
        qDebug() << "Nombre de departements dans la région : "
                 << requetePrepareDep.size();
        QString name;
        QString code;
        while(requetePrepareDep.next())
        {
            name = requetePrepareDep.value("name").toString();
            code = requetePrepareDep.value("code").toString();
            ui->comboBox_Departement->addItem(name,code);
        }
    }

}



void BDD::on_comboBox_Departement_currentIndexChanged(int index)
{
    // recupere l'id du departement
    QString idDep = ui->comboBox_Departement->itemData(index).toString();
    // vider la liste des departements
    ui->comboBox_Ville->clear();
    ui->comboBox_Ville->addItem("-Choisissez une ville-");

    QSqlQuery requetePrepareVille;
    requetePrepareVille.prepare("select distinct name,insee_code from cities where department_code = :idd ;");
    requetePrepareVille.bindValue(":idd",idDep);
    if(!requetePrepareVille.exec()){
        qDebug() << "pb ca a burger chef" << requetePrepareVille.lastError();
    }else {
        qDebug() << "Nombre de departements dans la région : "
                 << requetePrepareVille.size();
        QString name;
        QString code;
        while(requetePrepareVille.next())
        {
            name = requetePrepareVille.value("name").toString();
            code = requetePrepareVille.value("insee_code").toString();
            ui->comboBox_Ville->addItem(name,code);
        }
    }
}


