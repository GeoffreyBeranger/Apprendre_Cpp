#include "barrerectangle.h"



barreRectangle::barreRectangle(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const int _longueurRec, const int _largeurRec):
    barre(_reference,_longueur,_densite,_nomAlliage),
    longueurRec(_longueurRec),
    largeurRec(_largeurRec)
{
    cout << "Constructeur de la Classe Barre Rectangle" << endl;
}

barreRectangle::~barreRectangle()
{
    cout << "Destructeur de la Classe Barre Rectangle" << endl;
}

double barreRectangle::CalculerSection()
{
    return largeurRec*longueurRec;
}

double barreRectangle::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}


