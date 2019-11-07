#include "ihm.h"
#include "ui_ihm.h"

IHM::IHM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IHM)
{
    ui->setupUi(this);
}

IHM::~IHM()
{
    delete ui;
}

void IHM::on_pushButton_suite_clicked()
{
    afficherInfos();

        ///Changement de fenetre quand on appui sur le bouton suite
       ui->tabWidget->setCurrentIndex(1);
}

void IHM::afficherInfos()
{
    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
    nom = ui->lineEdit_Nom->text();
    prenom = ui->lineEdit_Prenom->text();
    age = ui->spinBox_Age->value();
    poids = ui->doubleSpinBox_Poids->value();
    taille = ui->doubleSpinBox_Taille->value();

    // affichage message de bienvenue
    ui->textEdit_Calcul->append("Bienvenue, "+nom +" "+prenom+"\n");


    // calcul de l'imc
    imc = poids/(taille*taille);
    // affichage de l'imc
    ui->textEdit_Calcul->append("Votre indice de masse corporel est de : "+QString::number(imc));
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
        indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    ui ->textEdit_Calcul->append("votre corpulence est qualifié de :  "+corpulences[indiceCorpulence]);
}

void IHM::on_pushButton_Devine_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButton_Sexe_Femme->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButton_Sexe_Homme->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEdit_Calcul->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit_Calcul->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEdit_Calcul->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void IHM::on_pushButton_Lorentz_clicked()
{

    double poidsIdeal = 0;
    if (ui->radioButton_Sexe_Femme->isChecked()) {
        poidsIdeal = taille*100 - 100 - ((taille*100-150)/2.5);
    }
    if (ui->radioButton_Sexe_Homme->isChecked()) {
        poidsIdeal = taille*100 - 100 - ((taille*100-150)/4);
    }
    if (poidsIdeal > 0) {
        ui->textEdit_Calcul->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit_Calcul->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEdit_Calcul->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }


}

void IHM::on_pushButton_Lorentz_Age_clicked()
{

    double poidsIdeal = 0;
    if (ui->radioButton_Sexe_Femme->isChecked()) {
        poidsIdeal = 50+((taille*100-150)/4.0)+((age-20)/4.0);
    }
    if (ui->radioButton_Sexe_Homme->isChecked()) {
        poidsIdeal = 50+((taille*100-150)/4.0)+((age-20)/4.0);
    }
    if (poidsIdeal > 0) {
        ui->textEdit_Calcul->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit_Calcul->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
          ui->textEdit_Calcul->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }

}
