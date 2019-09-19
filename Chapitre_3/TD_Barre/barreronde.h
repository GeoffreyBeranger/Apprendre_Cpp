#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
#include <math.h>


class barreRonde : public barre
{
public:
    barreRonde(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double diametre);
    ~barreRonde();
    double CalculerSection();
    double CalculerMasse();
private:
    double diametre;
};

#endif // BARRERONDE_H
