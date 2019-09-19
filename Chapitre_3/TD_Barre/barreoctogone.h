#ifndef BARREOCTOGONE_H
#define BARREOCTOGONE_H
#include <barre.h>
#include <math.h>
#include <string>


class barreOctogone : public barre
{
public:
    barreOctogone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre);
    ~barreOctogone();
    double CalculerMasse();
    double CalculerSection();
private:
    double diametre;
};

#endif // BARREOCTOGONE_H
