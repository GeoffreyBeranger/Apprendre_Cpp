#include <iostream>
#include "menu.h"
#include "alveoleslibres.h"
#include "rouleau.h"
using namespace std;

int main()
{
    /*
    int choix;
    int rangee,colonne;
    Alveoleslibres uneAlveole(2,5);
    try {
        menu leMenu("menu.txt");
        do{
            choix = leMenu.Afficher();

            switch(choix){
            case OPTION_1:
                cout << "Vous avez choisi l'option reserver" << endl;

                if(uneAlveole.Reserver(rangee,colonne)){
                    cout << "On vous a attribué une alveole -> rangée: " << rangee<< " colonne: "<< colonne << endl;
                }else
                {

                    cout << "Le Magasin est Plein" << endl;

                }
                uneAlveole.Visualiser();
                menu::AttendreAppuiTouche();
                break;
            case OPTION_2:
                cout << "Vous avez choisi l'option liberer" << endl;

                cout << "Rangee ?";
                cin >> rangee;
                cout << "Colonne ?";
                cin >> colonne;
                uneAlveole.Liberer(rangee,colonne);
                uneAlveole.Visualiser();
                menu::AttendreAppuiTouche();

                break;

            }

        }while (choix != QUITTER);

    }
    catch (ErreurFichier const &exp) {
        cout << "Erreur " << exp.ObtenirCodeErreur() << endl;
        cout << exp.ObtenirDescription() << endl;
        exit(EXIT_FAILURE);
    }{}
*/

}
