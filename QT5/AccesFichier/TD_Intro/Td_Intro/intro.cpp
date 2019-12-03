#include "intro.h"
#include "ui_intro.h"

Intro::Intro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Intro)
{
    ui->setupUi(this);
}

Intro::~Intro()
{
    delete ui;
}

void Intro::on_pushButton_clicked()
{

    QFile fichierSortie("monfichier.txt");
    if (!fichierSortie.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << fichierSortie.errorString();
    }else

    {

        QTextStream out(&fichierSortie);

        out << "c magique on dirait un cout ";
        out << "Voila un nomre et un retour chariot " << 56 << "\n";
        fichierSortie.close();

    }




}

void Intro::on_pushButton_2_clicked()
{

    QFile fichierSortieBinaire("monfichier.ilfaitbeauaujourd'hui");
    if(!fichierSortieBinaire.open(QIODevice::WriteOnly))
    {

        qDebug() << fichierSortieBinaire.errorString();

    }
    else
    {

        QDataStream out(&fichierSortieBinaire);
        QString nomOut = "Bidochon";
        QString prenomOut = " Robert";
        int ageOut = 54;
        double tailleOut = 1.65;
        QChar sexeOut = 'M';

        out << nomOut << prenomOut << ageOut << tailleOut << sexeOut;

        fichierSortieBinaire.close();
    }

}

void Intro::on_pushButton_3_clicked()
{

    QString nomFichier = QFileDialog::getOpenFileName(this,tr("Ouvrir le Fichier"),"../",tr("Fichiers images (*.png *.jpg *.gif);;Fichiers texte (*.txt);;Tous les fichiers (*)"));
    QFile fichierDyna(nomFichier);
    if(!fichierDyna.open(QIODevice::ReadOnly))
    {

        qDebug() << fichierDyna.errorString();

    }
    else
    {

        QDataStream in(&fichierDyna);
        QString nom;
        QString prenom;
        int age;
        double taille;
        QChar sexe;

        in>>nom>>prenom>>age>>taille>>sexe;
        qDebug() << nom << prenom << age << taille << sexe;

        fichierDyna.close();
    }

}


