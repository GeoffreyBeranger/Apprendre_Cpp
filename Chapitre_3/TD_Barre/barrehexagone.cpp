#include "barrehexagone.h"


/**
 * @brief barreHexagone::barreHexagone
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @details Constructeur de la classe Barre Hexagone
 */
barreHexagone::barreHexagone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe Barre Hexagone" << endl;
}

/**
 * @brief barreHexagone::~barreHexagone
 * @details Destructeur de la classe Barre Hexagone
 */
barreHexagone::~barreHexagone()
{
    cout << "Destructeur de la Classe Barre Hexagone" << endl;
}

double barreHexagone::CalculerMasse()
{
    double masse = 0;

    ///On change le type de longueur et densite en double
    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}

/**
 * @brief barreHexagone::CalculerSection
 * @return
 * @details Methode CalculerSection qui renvoie la Section
 */
double barreHexagone::CalculerSection()
{
    return 2*(sqrt((3*diametre*diametre)/4));
}
