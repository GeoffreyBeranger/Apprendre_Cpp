#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "compte.h"


class CompteEpargne : public Compte
{

private:
    float tauxInterets;
public:
    void CalculerInterets();
    CompteEpargne(const float _montant_initial);
    CompteEpargne();
    ~CompteEpargne();
};

#endif // COMPTEEPARGNE_H
