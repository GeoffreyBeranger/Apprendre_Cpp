#ifndef ROULEAU_H
#define ROULEAU_H
#include <string>
#include <iostream>

using namespace std;

/**
 * @brief The Rouleau class
 */
class Rouleau
{
public:
    Rouleau(const string _reference, const int _diametre);
    void AffecterAlveole(const int _rangee, const int _colonne);
    void ObtenirLocalisation(int &_rangee, int &_colonne);
    bool operator<(const Rouleau _autreRouleau);
    int operator-(const Rouleau _autreRouleau);
    void Visualiser();
private:
    string reference; /// Code fournisseur
    int diametre; /// Diamètre du rouleau exprimé en millimètre [100 à 300]
    int rangee; /// Numéro de la rangée où est stocké le rouleau [1 à 10]
    int colonne; /// Numéro de la colonne où est stocké le rouleau [1 à 20]
};

#endif // ROULEAU_H
