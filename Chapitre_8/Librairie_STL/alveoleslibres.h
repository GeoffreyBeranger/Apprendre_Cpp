#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H
#include <iostream>
#include <vector>

using namespace std;

class Alveoleslibres : public vector<int>
{
public:
    Alveoleslibres(const int _nbRangees = 10, const int _nbColonnes=20);
    bool Reserver(int &_rangee, int &_colonne);
    void Liberer(const int _rangee, const int _colonne);
    void Visualiser();
private:
    int nbRangees; /// Nombre de rangées dans le magasin
    int nbColonnes; /// Nombre de colonnes dans le magasin
};

#endif // ALVEOLESLIBRES_H
