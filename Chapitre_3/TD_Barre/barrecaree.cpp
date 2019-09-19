#include "barrecaree.h"



barreCarree::barreCarree(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const int _largeur):
    barre (_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur)
{
    cout << "Constructeur de la Classe Barre Carrée" << endl;
}

barreCarree::~barreCarree()
{
    cout << "Destructeur de la Classe Carrée" << endl;
}

double barreCarree::CalculerSection()
{

    return largeur*largeur;
}

double barreCarree::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}
