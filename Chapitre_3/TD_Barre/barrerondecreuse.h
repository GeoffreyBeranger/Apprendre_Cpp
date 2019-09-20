#ifndef BARRERONDECREUSE_H
#define BARRERONDECREUSE_H
#include "barreronde.h"

using namespace std;

/**
 * @brief The barreRondeCreuse class
 * @details definition de la Classe BarreRondeCreuse qui herite de barreRonde
 */
class barreRondeCreuse : public barreRonde
{
public:
    barreRondeCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre,const double _diametrePetit);
    ~barreRondeCreuse();
    double CalculerMasse();
    double CalculerSection();
private:
    double diametrePetit;
};

#endif // BARRERONDECREUSE_H
