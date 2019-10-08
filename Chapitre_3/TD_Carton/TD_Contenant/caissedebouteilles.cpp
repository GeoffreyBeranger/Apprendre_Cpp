#include "caissedebouteilles.h"
#include <iostream>

using namespace std;




/**
 * @brief caisseDeBouteilles::caisseDeBouteilles
 * @details Constructeur de la Classe caisseDeBouteilles
 * @param _longueur
 * @param _hauteur
 * @param _profondeur
 * @param _nbBouteilles
 * @param _contenance
 */
caisseDeBouteilles::caisseDeBouteilles(const int _longueur, const int _hauteur, const int _profondeur, const int _nbBouteilles, const int _contenance):contenant (_hauteur,_longueur,_profondeur),nbBouteilles(_nbBouteilles),contenance(_contenance)
{
cout << "Constructeur de la classe CaisseDeBouteilles " << endl;
}

/**
 * @brief caisseDeBouteilles::~caisseDeBouteilles
 * @details Destructeur de la classe caisseDeBouteilles
 */
caisseDeBouteilles::~caisseDeBouteilles()
{
    cout << "Destructeur de la classe CaisseDeBouteille" << endl;
}

/**
 * @brief caisseDeBouteilles::CalculerVolume
 * @details Methode CalculerVolume qui retourne le volume
 * @return
 */
int caisseDeBouteilles::CalculerVolume()
{

    return nbBouteilles*contenance;

}


