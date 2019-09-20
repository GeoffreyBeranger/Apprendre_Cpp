#ifndef BARREHEXACREUSE_H
#define BARREHEXACREUSE_H
#include "barrehexagone.h"



using namespace std;

/**
 * @brief The barreHexaCreuse class
 * @details Definition de la classebarreHexaCreuse
 */
class barreHexaCreuse : public barreHexagone
{
public:
    barreHexaCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre,const double _diametrePetit);
    ~barreHexaCreuse();
    double CalculerMasse();
    double CalculerSection();
private:
    double diametrePetit;
};

#endif // BARREHEXACREUSE_H
