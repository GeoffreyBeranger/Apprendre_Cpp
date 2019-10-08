#ifndef MENU_H
#define MENU_H
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <algorithm>



using namespace std;






/**
 * @brief The Menu class
 * @date 13 septembre 2019
 * @author BERANGER Geoffrey (feat.Mathis C)
 */
class Menu
{
private:
    ///Désigne le nom du fichier
    string nom;
    ///Représente un tableau de chaînes de caractères implémentées sous la forme de string. Ce tableau sera alloué dynamiquement en fonction du nombre de lignes du fichier
    string * options;
    ///Contient le nombre d'options du Menu
    int nbOptions;
    ///Taille de la plus grande chaîne contenue dans le tableau
    int longueurMax;

public:
    ~Menu();
    Menu(const string _nom);
    int Afficher();
    static void AttendreAppuiTouche();
};


class ErreurFichier
{

private:
    int codeErreur;
    string message;

public:
    ErreurFichier(int _codeErreur, string _message);
    int ObtenirCodeErreur()const;
    string ObtenirDescription()const;

};






#endif // MENU_H
