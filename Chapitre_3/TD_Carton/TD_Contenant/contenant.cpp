#include "contenant.h"
#include <iostream>

using namespace std;

/**
 * @brief contenant::contenant
 * @param _largeur
 * @param _hauteur
 * @param _profondeur
 * @details Constructeur de la Classe contenant, initialisation des parametres largeur/hauteur/profondeur
 */
contenant::contenant(const int _largeur, const int _hauteur, const int _profondeur)
{

    largeur = _largeur;
    hauteur = _hauteur;
    profondeur = _profondeur;
    cout << "constructeur de la classe Contenant" << endl;

}

/**
 * @brief contenant::~contenant
 * @details Destructeur de la classe contenant
 */
contenant::~contenant()
{

    cout << "Destructeur de la clase Contenant" << endl;
}


/**
 * @brief contenant::CalculerVolume
 * @return
 * @details Methode CalculerVolume qui retourne le Volume
 */
int contenant::CalculerVolume()
{
return largeur*hauteur*profondeur;
}
