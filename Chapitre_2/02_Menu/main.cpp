#include <iostream>
#include <string>
#include "menu.h"

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
    Menu unMenu("menu.txt");
    do
    {

        choix = unMenu.Afficher();
        switch (choix)
        {

        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }

    }while(choix != QUITTER);


    return 0;
}
