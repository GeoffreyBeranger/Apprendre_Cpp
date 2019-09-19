#include "barreoctogone.h"



barreOctogone::barreOctogone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe Barre Hexagone" << endl;
}

barreOctogone::~barreOctogone()
{
    cout << "Destructeur de la Classe Barre Hexagone" << endl;
}

double barreOctogone::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}

double barreOctogone::CalculerSection()
{
    return 2*((diametre*diametre)*(sqrt(2-1)));
}
