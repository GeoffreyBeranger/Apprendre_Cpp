#ifndef BARREHEXAGONE_H
#define BARREHEXAGONE_H
#include <string>
#include <barre.h>
#include <math.h>


class barreHexagone : public barre
{
public:
    barreHexagone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre);
    ~barreHexagone();
    double CalculerMasse();
    double CalculerSection();
private:
    double diametre;
};

#endif // BARREHEXAGONE_H
