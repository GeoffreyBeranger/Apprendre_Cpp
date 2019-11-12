#include <iostream>
#include <string>
#include "menu.h"
#include "barrecarree.h"
#include "barreronde.h"
#include "catalogue.h"
#define NBBARRES 10

using namespace std;
/**
 * @brief The CHOIX_MENU enum
 * @details Enumeration qui associe un chiffre a une option
 */


/**
 * @brief main
 * @return
 * @details Programme Principal qui créer un menu en fonction d'un fichier texte qu'on donne, Switch qui reconnait quelle touche on appui
 */
int main()
{
    int choix;
    char reference[80+1];
    float longueur;
    float densite;
    string nomAlliage;
    int largeur;
    double diametre;

    Catalogue unCatalogue(NBBARRES);
    Menu unMenu("menu.txt");
    do
    {
        BarreCarree *uneBarreCarree;
        choix = unMenu.Afficher();
        switch (choix)
        {

        case OPTION_1:
            cout << "Réference de la barre : " ;
            cin.getline(reference,80);
            cout << "Longueur en cm : " ;
            cin >>  longueur ;
            cout << "Densité de la Barre : " ;
            cin >>  densite ;
            cout << "Coté du carré en cm : ";
            cout << largeur;
            uneBarreCarree = new BarreCarree(reference,longueur,densite,nomAlliage,largeur);
            unCatalogue.AjouterBarre(uneBarreCarree);
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            unCatalogue.AfficherCatalogue();
            Menu::AttendreAppuiTouche();
            break;

        }

    }while(choix != QUITTER);


    return 0;
}
