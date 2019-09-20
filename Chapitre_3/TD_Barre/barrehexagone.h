#ifndef BARREHEXAGONE_H
#define BARREHEXAGONE_H
#include <string>
#include "barre.h"
#include <math.h>


/**
 * @brief The barreHexagone class
 * @details Definition de la classe BarreHexagone qui herite de barre
 */
class barreHexagone : public barre
{
public:
    barreHexagone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre);
    ~barreHexagone();
    double CalculerMasse();
    double CalculerSection();
protected:
    double diametre;///diametre du grand hexagone
};

#endif // BARREHEXAGONE_H
