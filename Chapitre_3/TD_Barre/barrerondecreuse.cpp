#include "barrerondecreuse.h"


/**
 * @brief barreRondeCreuse::barreRondeCreuse
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @param _diametre
 * @param _diametrePetit
 * @details Constructeur de la Classe Barre Ronde Creuse qui initialise les paramètres de la classe
 */
barreRondeCreuse::barreRondeCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage, const double _diametre, const double _diametrePetit):
    barreRonde(_reference,_longueur,_densite,_nomAlliage,_diametre),
    diametrePetit(_diametrePetit)
{
    cout << "Constructeur de la Classe Barre Ronde Creuse" << endl;
}

/**
 * @brief barreRondeCreuse::~barreRondeCreuse
 * @details Destructeur de la Classe BarreRondeCreuse
 */
barreRondeCreuse::~barreRondeCreuse()
{
    cout << "Destructeur de la Classe Barre Ronde Creuse" << endl;
}

/**
 * @brief barreRondeCreuse::CalculerMasse
 * @details Methode CalculerMasse qui renvoie la Masse
 * @return
 */
double barreRondeCreuse::CalculerMasse()
{
    double masse;
    ///On transforme longueur et densite en double car masse est un double
    masse = (static_cast<double>(longueur))*(CalculerSection())*(static_cast<double>(densite));

    return masse;
}

/**
 * @brief barreRondeCreuse::CalculerSection
 * @details Methode CalculerSection qui renvoie la section Totale de l'objet
 * @return
 */
double barreRondeCreuse::CalculerSection()
{

    double sectionTot;
    double sectionPetit;
    double sectionGrand;


    sectionGrand = barreRonde::CalculerSection();
    sectionPetit = (M_PI*(diametrePetit*diametrePetit)/4);
    sectionTot = sectionGrand-sectionPetit;


    return sectionTot;
}
