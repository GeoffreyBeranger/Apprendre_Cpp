#include "rouleau.h"


/**
 * @brief Rouleau::Rouleau
 * @param _reference
 * @param _diametre
 * @details Constructeur de la classe, il initialise la référence et le diamètre du rouleau.
 */
Rouleau::Rouleau(const string _reference, const int _diametre):
    reference(_reference),
    diametre(_diametre)
{

}

/**
 * @brief Rouleau::AffecterAlveole
 * @param _rangee
 * @param _colonne
 * @details Attribue une alvéole (rangée et colonne) à un rouleau qui vient d'entrer dans le magasin.
 */
void Rouleau::AffecterAlveole(const int _rangee, const int _colonne)
{

    rangee = _rangee;
    colonne = _colonne;

}

/**
 * @brief Rouleau::ObtenirLocalisation
 * @param _rangee
 * @param _colonne
 * @details Restitue le numéro de rangée et de colonne où est stocké le rouleau dans le magasin.
 */
void Rouleau::ObtenirLocalisation(int &_rangee, int &_colonne)
{

    _rangee = rangee;
    _colonne = colonne;

}

/**
 * @brief Rouleau::operator <
 * @param _autreRouleau
 * @details Vrai si rouleau1 < rouleau2, faux sinon
 * @return
 */
bool Rouleau::operator<(const Rouleau _autreRouleau)
{

    bool retour = false;
    if(diametre<_autreRouleau.diametre)
        retour = true;

    return retour;
}

/**
 * @brief Rouleau::operator -
 * @param _autreRouleau
 * @details Retourne la différence entre les diamètres du rouleau2 et du rouleau1
 * @return
 */
int Rouleau::operator-(const Rouleau _autreRouleau)
{
    int retour;

    retour = _autreRouleau.diametre - diametre;

    return retour;
}

/**
 * @brief Rouleau::Visulaliser
 * @details Ca affiche des trucs
 */
void Rouleau::Visualiser()
{

    cout << "Rouleau reference : " << reference << "Diametre : " << diametre << endl;
    cout << "Dans le magasin en " << rangee << "-" << colonne << endl;

}
