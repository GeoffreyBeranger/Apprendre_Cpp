#ifndef BARRECARREE_H
#define BARRECARREE_H
#include "barre.h"
#include <math.h>

/**
 * @brief The barreCarree class
 * @details
 */
class barreCarree : public barre
{
public:
    barreCarree(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const int _largeur);
    ~barreCarree();
    double CalculerSection();
    double CalculerMasse();
private:
    int largeur;
};

#endif // BARRECARREE_H
