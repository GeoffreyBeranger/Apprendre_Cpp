#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
#include <math.h>

/**
 * @brief The barreCarree class
 * @details
 */
class BarreCarree : public Barre
{
public:
    BarreCarree(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const int _largeur);
    ~BarreCarree();
    double CalculerSection();
    float CalculerMasse();
private:
    int largeur;
};

#endif // BARRECARREE_H
