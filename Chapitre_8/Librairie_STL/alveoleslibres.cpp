#include "alveoleslibres.h"


/**
 * @brief Alveoleslibres::Alveoleslibres
 * @param _nbRangees
 * @param _nbColonnes
 * @details Constructeur de la classe, il initialise les alvéoles libres.
 *  Au démarrage de l’application, toutes les alvéoles sont libres.
 *  Les valeurs par défauts sont les valeurs imposées par le magasin soit respectivement 10 et 20.
 */
Alveoleslibres::Alveoleslibres(const int _nbRangees, const int _nbColonnes):
    nbRangees(_nbRangees),
    nbColonnes(_nbColonnes)
{

    for (int indice = 1; indice <= (nbRangees * nbColonnes); indice ++) {
        push_back(indice);
    }

}

/**
 * @brief Alveoleslibres::Reserver
 * @param _rangee
 * @param _colonne
 * @details Retourne vrai, si une alvéole est libre,  dans ce cas, la méthode fournit la localisation (sa rangée et sa colonne) et la supprime des alvéoles libres.
 *  Si aucune alvéole n’est disponible, la méthode retourne faux
 * @return
 */
bool Alveoleslibres::Reserver(int &_rangee, int &_colonne)
{

    bool retour = false;
    if(!empty())
    {
        int numAlveole = back();
        _rangee = ((numAlveole - 1) / nbColonnes) +1;
        _colonne = ((numAlveole -1) % nbColonnes)+1;
        pop_back();
        retour = true;
    }



    return retour;

}
/**
 * @brief Alveoleslibres::Liberer
 * @param _rangee
 * @param _colonne
 * @details Ajoute l’alvéole dont les coordonnées sont passées en paramètre à l'ensemble des alvéoles libres.
 */
void Alveoleslibres::Liberer(const int _rangee, const int _colonne)
{

    int numAlveole = (_rangee-1)*nbColonnes + _colonne;
    push_back(numAlveole);


}

/**
 * @brief Alveoleslibres::Visualiser
 * @details Methode permettant de Visualiser les informations
 */
void Alveoleslibres::Visualiser()
{
    vector<int>:: iterator it;
    for (it=begin();it != end();it++) {
        cout << *it << " ";
    }
}
