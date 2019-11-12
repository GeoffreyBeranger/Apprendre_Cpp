#include "barre.h"





/**
 * @brief barre::barre
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _nomAlliage
 * @details Constructeur de la classe barre
 */
Barre::Barre(const string _reference, const int _longueur, const float _densite, const string _nomAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomAlliage(_nomAlliage)
{
    cout << "Constructeur de la Classe Barre"  << endl;
}

/**
 * @brief barre::~barre
 * @details destructeur classe barre
 */
Barre::~Barre()
{
    cout << "Destructeur de la Classe barre" << endl;
}

/**
 * @brief barre::AfficherCaracteristiques
 * @details methode afficher les caracteristique
 */
void Barre::AfficherCaracteristiques()
{
    cout << "La Référence de la barre est : " << reference << endl;
    cout << "La Longueur de la barre est : " << longueur << endl;
    cout << "La Densité de la barre est de : " << densite << endl;
    cout << "Le nom d'Alliage de la barre est : " << nomAlliage << endl;
}

