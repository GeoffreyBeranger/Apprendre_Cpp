#include "comptepayant.h"

ComptePayant::ComptePayant(const float _monstant_initial):
    Compte (_monstant_initial)
{

}

ComptePayant::~ComptePayant()
{

}

void ComptePayant::Retirer(const float _montant)
{
    Compte::Retirer(_montant);
    solde = solde-1;
}

void ComptePayant::Deposer(const float _montant)
{
    Compte::Deposer(_montant);
    solde = solde-1;
}
