#include "barrerectangle.h"


/**
 * @brief barreRectangle::barreRectangle
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _longueurRec
 * @param _largeurRec
 * @details Constructeur de la classe barreRectangle qui initialise les parametres
 */
barreRectangle::barreRectangle(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const int _longueurRec, const int _largeurRec):
    barre(_reference,_longueur,_densite,_nomAlliage),
    longueurRec(_longueurRec),
    largeurRec(_largeurRec)
{
    cout << "Constructeur de la Classe Barre Rectangle" << endl;
}

/**
 * @brief barreRectangle::~barreRectangle
 * @details Destructeur de la classe BarreRectangle
 */
barreRectangle::~barreRectangle()
{
    cout << "Destructeur de la Classe Barre Rectangle" << endl;
}

/**
 * @brief barreRectangle::CalculerSection
 * @details Methode CalculerSection qui renvoie la section
 * @return
 */
double barreRectangle::CalculerSection()
{
    return largeurRec*longueurRec;
}

/**
 * @brief barreRectangle::CalculerMasse
 * @return
 * @details Methode CalculerMasse qui renvoie la masse
 */
double barreRectangle::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}


