#include "barreoctogonecreuse.h"


/**
 * @brief barreOctogoneCreuse::barreOctogoneCreuse
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @param _diametrePetit
 * @details Constructeur de la classe BarreOctogoneCreuse qui initialise ses parametres
 */
barreOctogoneCreuse::barreOctogoneCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre, const double _diametrePetit):
    barreOctogone(_reference,_longueur,_densite,_nomAlliage,_diametre),
    diametrePetit(_diametrePetit)
{

    cout << "Constructeur de la Classe Barre Octogone Creuse" << endl;

}

/**
 * @brief barreOctogoneCreuse::~barreOctogoneCreuse
 * @details Destructeur de la classe BarreOctogoneCreuse
 */
barreOctogoneCreuse::~barreOctogoneCreuse()
{
    cout << "Destructeur de la Barre Octogone Creuse" << endl;
}

/**
 * @brief barreOctogoneCreuse::CalculerMasse
 * @return
 * @details Methode CalculerMasse qui renvoie la Masse
 */
double barreOctogoneCreuse::CalculerMasse()
{
    double masse;

    masse = static_cast<double>(longueur)*CalculerSection()*static_cast<double>(densite);

    return  masse;
}

/**
 * @brief barreOctogoneCreuse::CalculerSection
 * @return
 * @details Methode CalculerSection qui renvoie la section de la barre creuse
 */
double barreOctogoneCreuse::CalculerSection()
{
    double sectionTot;
    double sectionGrand;
    double sectionPetit;

    sectionGrand = barreOctogone::CalculerSection();
    sectionPetit = 2*((diametrePetit*diametrePetit)*(sqrt(2)-1));
    sectionTot = sectionGrand-sectionPetit;

    return sectionTot;
}
