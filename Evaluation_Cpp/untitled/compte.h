#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>

class Compte
{
public:
    void ConsulterSolde();
    void Deposer(const float _montant);
    void Retirer(const float _montant);
    ~Compte();
    Compte(const float _montant_initial);
    Compte();
protected:
    float solde;
};

#endif // COMPTE_H
