#include "barrehexagone.h"



barreHexagone::barreHexagone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe Barre Hexagone" << endl;
}

barreHexagone::~barreHexagone()
{
    cout << "Destructeur de la Classe Barre Hexagone" << endl;
}

double barreHexagone::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}

double barreHexagone::CalculerSection()
{
    return 2*(sqrt((3*diametre*diametre)/4));
}
