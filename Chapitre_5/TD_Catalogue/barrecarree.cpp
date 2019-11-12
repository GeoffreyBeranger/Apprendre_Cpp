#include "barrecarree.h"


/**
 * @brief barreCarree::barreCarree
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _largeur
 * @details Constructeur classe BarreCarree
 */
BarreCarree::BarreCarree(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const int _largeur):
    Barre (_reference,_longueur,_densite,_nomAlliage),
    largeur(_largeur)
{
    cout << "Constructeur de la Classe Barre Carrée \n" << endl;
}
/**
 * @brief barreCarree::~barreCarree
 * @details Destructeur Classe BarreCarree
 */
BarreCarree::~BarreCarree()
{
    cout << "Destructeur de la Classe Barre Carrée" << endl;
}

/**
 * @brief barreCarree::CalculerSection
 * @return
 * @details Methode CalculerSection
 */
double BarreCarree::CalculerSection()
{

    return largeur*largeur;
}

/**
 * @brief barreCarree::CalculerMasse
 * @return
 * @details Methode CalculerMasse
 */
float BarreCarree::CalculerMasse()
{
    float masse = 0;

    masse = longueur*CalculerSection()*densite;


    return masse;
}
