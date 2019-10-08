#include "compteepargne.h"




CompteEpargne::CompteEpargne(const float _montant_initial):
    Compte (_montant_initial),
    tauxInterets(1.5)
{

}


CompteEpargne::~CompteEpargne()
{

}


void CompteEpargne::CalculerInterets()
{


   solde = solde + (tauxInterets * solde / 100);


}




