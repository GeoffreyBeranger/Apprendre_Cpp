#include "barreronde.h"


/**
 * @brief barreRonde::barreRonde
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @details Contructeur de la Classe BarreRonde qui initialise les parametres
 */
barreRonde::barreRonde(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre):
    barre(_reference,_longueur,_densite,_nomAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la Classe barreRonde" << endl;
}

/**
 * @brief barreRonde::~barreRonde
 * @details Destructeur de la classe BarreRonde
 */
barreRonde::~barreRonde()
{
    cout << "Destructeur de la Classe barreRonde" << endl;
}

/**
 * @brief barreRonde::CalculerSection
 * @details Methode CalculerSection qui renvoie la section de l'objet
 * @return
 */
double barreRonde::CalculerSection()
{
    return (M_PI*(diametre*diametre)/4);
}

/**
 * @brief barreRonde::CalculerMasse
 * @details Methode CalculerMasse qui renvoie la masse de l'objet
 * @return
 */
double barreRonde::CalculerMasse()
{
    double masse = 0;

    ///On change le type de longueur et densite en double
    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}
