#include "barrecaree.h"


/**
 * @brief barreCarree::barreCarree
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _largeur
 * @details Constructeur classe BarreCarree
 */
barreCarree::barreCarree(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const int _largeur):
    barre (_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur)
{
    cout << "Constructeur de la Classe Barre Carrée" << endl;
}
/**
 * @brief barreCarree::~barreCarree
 * @details Destructeur Classe BarreCarree
 */
barreCarree::~barreCarree()
{
    cout << "Destructeur de la Classe Carrée" << endl;
}

/**
 * @brief barreCarree::CalculerSection
 * @return
 * @details Methode CalculerSection
 */
double barreCarree::CalculerSection()
{

    return largeur*largeur;
}

/**
 * @brief barreCarree::CalculerMasse
 * @return
 * @details Methode CalculerMasse
 */
double barreCarree::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));


    return masse;
}
