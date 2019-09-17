#include "carton.h"
#include <iostream>

using namespace std;




carton::carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):contenant (_largeur,_hauteur,_profondeur),poidsMaxi(_poidsMaxi)
{


    cout << "Constructeur de la clase Carton" << endl;
    cout << "Largeur : " << largeur << " cm" << endl;
    cout << "Hauteur : " << hauteur << " cm" << endl;
    cout << "Profondeur : " << profondeur << " cm" << endl;


}

carton::~carton()
{

    cout << "Destructeur de la clase Carton" << endl;

}

float carton::ObtenirPoidsMax()
{
    return poidsMaxi;
}
