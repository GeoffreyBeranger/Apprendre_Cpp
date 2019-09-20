#include <iostream>
#include "barreoctogonecreuse.h"

using namespace std;

/**
 * @brief main
 * @version 1.0
 * @date 20/09/2019
 * @details Programme Principal qui créer une barre en initialisant ses paramètres,
 *          Puis affiche sa Section et sa Masse
 * @return
 */
int main()
{
    ///Création d'un objet BarreOctogoneCreuse
    barreOctogoneCreuse uneBarre("A1234",5,5,"Fer",5,3);

    ///Affichage de la section de cette barre
    cout << uneBarre.CalculerSection() << endl;
    ///Affichage de la Masse de cette Barre
    cout << "La Masse de votre Barre est de : " << uneBarre.CalculerMasse() << endl;
    return 0;
}
