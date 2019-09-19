#include "barreronde.h"



barreRonde::barreRonde(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe barreRonde" << endl;
}

barreRonde::~barreRonde()
{
    cout << "Destructeur de la Classe barreRonde" << endl;
}

double barreRonde::CalculerSection()
{
    return (M_PI*(diametre*diametre)/4);
}

double barreRonde::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}
