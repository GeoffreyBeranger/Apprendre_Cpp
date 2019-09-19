#ifndef BARRE_H
#define BARRE_H
#include <string>
#include <iostream>
#include <math.h>

using namespace std;


class barre
{
public:
    barre(const string _reference,const int _longueur,const float _densite,const string nomAlliage);
    ~barre();
    void AfficherCaracteristiques();
protected:
    string reference;
    float longueur;
    float densite;
    string nomAlliage;
};

#endif // BARRE_H
