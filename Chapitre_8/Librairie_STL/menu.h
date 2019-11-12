/**
  * @file menu.h
  * @brief Définition de la classe menu
  * @date 13/09/19
  * @author mc
*/
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
enum CHOIX_MENU{
    OPTION_1 = 1,
    OPTION_2,
    QUITTER
};
enum erreurs{
    FICHIER
};

class menu
{
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    menu(const string _nom);
    ~menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

class ErreurFichier{
private:
    int codeErreur;
    string message;
public:
    ErreurFichier(int _codeErreur,string _message);
    int ObtenirCodeErreur() const;
    string ObtenirDescription() const;

};

#endif // MENU_H
