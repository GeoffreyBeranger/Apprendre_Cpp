#include "contenant.h"
#include <iostream>

using namespace std;


contenant::contenant(const int _largeur, const int _hauteur, const int _profondeur)
{

    largeur = _largeur;
    hauteur = _hauteur;
    profondeur = _profondeur;
    cout << "constructeur de la classe Contenant" << endl;

}

contenant::~contenant()
{
    cout << "Destructeur de la clase Contenant" << endl;
}

int contenant::CalculerVolume()
{
return largeur*hauteur*profondeur;
}
