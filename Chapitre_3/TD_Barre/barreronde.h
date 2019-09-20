#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
#include <math.h>


/**
 * @brief The barreRonde class
 * @details definition de la classe BarreRonde qui herite de barre
 */
class barreRonde : public barre
{
public:
    barreRonde(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double diametre);
    ~barreRonde();
    double CalculerSection();
    double CalculerMasse();
protected:
    double diametre;
};

#endif // BARRERONDE_H
