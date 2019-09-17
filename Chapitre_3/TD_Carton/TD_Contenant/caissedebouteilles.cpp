#include "caissedebouteilles.h"
#include <iostream>

using namespace std;





caisseDeBouteilles::caisseDeBouteilles(const int _longueur, const int _hauteur, const int _profondeur, const int _nbBouteilles, const int _contenance):contenant (_hauteur,_longueur,_profondeur),nbBouteilles(_nbBouteilles),contenance(_contenance)
{
cout << "Constructeur de la classe CaisseDeBouteilles " << endl;
}

caisseDeBouteilles::~caisseDeBouteilles()
{
    cout << "Destructeur de la classe CaisseDeBouteille" << endl;
}

int caisseDeBouteilles::CalculerVolume()
{

    return nbBouteilles*contenance;

}


