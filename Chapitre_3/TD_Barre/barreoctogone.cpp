#include "barreoctogone.h"


/**
 * @brief barreOctogone::barreOctogone
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @details Constructeur de la classe Barre Octogone
 */
barreOctogone::barreOctogone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe Barre Hexagone" << endl;
}

/**
 * @brief barreOctogone::~barreOctogone
 * @details Destructeur de la classe Barre OCtogone
 */
barreOctogone::~barreOctogone()
{
    cout << "Destructeur de la Classe Barre Hexagone" << endl;
}

/**
 * @brief barreOctogone::CalculerMasse
 * @return
 * @details Methode CalculerMasse qui renvoie la Masse
 */
double barreOctogone::CalculerMasse()
{
    double masse = 0;

    ///On change le type de longueur et densite en double
    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}

/**
 * @brief barreOctogone::CalculerSection
 * @return
 * @details Methode CalculerSection qui renvoie la section
 */
double barreOctogone::CalculerSection()
{
    return 2*((diametre*diametre)*(sqrt(2)-1));
}
