#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"


/**
 * @brief The barreRectangle class
 * @details Definition de la classe barreRectangle qui herite de barre
 */
class barreRectangle : public barre
{
public:
    barreRectangle(const string _reference, const int _longueur, const float _densite, const string _nomAlliage,const int _longueurRec,const int _largeurRec);
    ~barreRectangle();
    double CalculerSection();
    double CalculerMasse();
private:
    int longueurRec;
    int largeurRec;
};

#endif // BARRERECTANGLE_H
