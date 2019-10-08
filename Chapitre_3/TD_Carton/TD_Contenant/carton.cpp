#include "carton.h"
#include <iostream>

using namespace std;



/**
 * @brief carton::carton
 * @param _largeur
 * @param _hauteur
 * @param _profondeur
 * @param _poidsMaxi
 * @details Constructeur de la classe carton, initialisation des parametres
 */
carton::carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):contenant (_largeur,_hauteur,_profondeur),poidsMaxi(_poidsMaxi)
{


    cout << "Constructeur de la clase Carton" << endl;
    cout << "Largeur : " << largeur << " cm" << endl;
    cout << "Hauteur : " << hauteur << " cm" << endl;
    cout << "Profondeur : " << profondeur << " cm" << endl;


}

/**
 * @brief carton::~carton
 * @details Destructeur de la classe carton
 */
carton::~carton()
{

    cout << "Destructeur de la clase Carton" << endl;

}

/**
 * @brief carton::ObtenirPoidsMax
 * @details Methode ObtenirPoidsMax qui retourne  le poids de l'objet
 * @return
 */
float carton::ObtenirPoidsMax()
{
    return poidsMaxi;
}
