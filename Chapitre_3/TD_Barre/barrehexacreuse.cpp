#include "barrehexacreuse.h"


/**
 * @brief barreHexaCreuse::barreHexaCreuse
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @param _diametrePetit
 * @details
 */
barreHexaCreuse::barreHexaCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre, const double _diametrePetit):
    barreHexagone (_reference,_longueur,_densite,_nomAlliage,_diametre),
    diametrePetit(_diametrePetit)
{
    cout << "Constructeur de la Classe Barre Hexa Creuse" << endl;
}

/**
 * @brief barreHexaCreuse::~barreHexaCreuse
 * @details Destructeur de la classe barreHexaCreuse
 */
barreHexaCreuse::~barreHexaCreuse()
{
    cout << "Destructeur de la Classe Barre Hexa Creuse" << endl;
}

/**
 * @brief barreHexaCreuse::CalculerMasse
 * @return
 * @details Methode CalculerMasse qui renvoie la masse
 */
double barreHexaCreuse::CalculerMasse()
{
    double masse = 0;

    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));

    return masse;
}

/**
 * @brief barreHexaCreuse::CalculerSection
 * @return
 * @details Methode CalculerSection qui renvoie la valeur de la section
 */
double barreHexaCreuse::CalculerSection()
{
    double sectionPetit = 0;
    double sectionGrand = 0;
    double sectionTot = 0;

    sectionPetit = 2*(sqrt((3*diametrePetit*diametrePetit)/4));
    sectionGrand = barreHexagone::CalculerSection();
    sectionTot = sectionGrand - sectionPetit;

    return sectionTot;
}
