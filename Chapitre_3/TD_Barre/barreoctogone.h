#ifndef BARREOCTOGONE_H
#define BARREOCTOGONE_H
#include <barre.h>
#include <math.h>
#include <string>


/**
 * @brief The barreOctogone class
 * @details Definition de la classe BarreOctogone qui herite de barre
 */
class barreOctogone : public barre
{
public:
    barreOctogone(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const double _diametre);
    ~barreOctogone();
    double CalculerMasse();
    double CalculerSection();
protected:
    double diametre;/// diametre du grand cercle
};

#endif // BARREOCTOGONE_H
