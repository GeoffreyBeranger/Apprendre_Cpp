#include <iostream>
#include "carton.h"
#include "contenant.h"
#include "caissedebouteilles.h"

using namespace std;


/**
 * @brief main
 * @details Création d'un objet une CaisseDeBouteilles
 * @return
 */
int main()
{

    caisseDeBouteilles uneCaisseDeBouteilles(3,3,3,10,2);

    cout << "Le Volume des Bouteilles est de : " << uneCaisseDeBouteilles.CalculerVolume() << " L" << endl;
    cout << "Le Volume de la Caisse de Bouteille est de : " << uneCaisseDeBouteilles.contenant::CalculerVolume()  << "cm3 " << endl;

    return 0;
}
