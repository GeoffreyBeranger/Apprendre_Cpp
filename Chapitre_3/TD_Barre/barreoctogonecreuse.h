#ifndef BARREOCTOGONECREUSE_H
#define BARREOCTOGONECREUSE_H
#include "barreoctogone.h"


/**
 * @brief The barreOctogoneCreuse class
 * @details Definition de la classe Barre Octogone Creuse
 */
class barreOctogoneCreuse : public barreOctogone
{
public:
    barreOctogoneCreuse(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre,const double _diametrePetit);
    ~barreOctogoneCreuse();
    double CalculerMasse();
    double CalculerSection();
private:
    double diametrePetit;///diametre de l'octogone central
};

#endif // BARREOCTOGONECREUSE_H
