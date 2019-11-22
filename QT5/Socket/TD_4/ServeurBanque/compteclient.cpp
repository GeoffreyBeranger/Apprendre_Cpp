#include "compteclient.h"


CompteClient::CompteClient(QObject *parent):QTcpSocket(parent)
{

}


bool CompteClient::Retirer(float montant)
{
    bool ok=true;
    if (montant>solde){
        ok=false;
    }
    else
    {
        solde-=montant;
        bd.MettreAJourLeSolde(numCompte,solde);
    }
    return ok;
}

void CompteClient::Deposer(float montant)
{
    if (montant>0)
    {
        solde+=montant;
        bd.MettreAJourLeSolde(numCompte,solde);
    }

}

float CompteClient::ObtenirSolde()
{
    solde=bd.ObtenirSolde(numCompte);
    return solde;

}

void CompteClient::DefinirNumCompte(int nc)
{
    numCompte=nc;
    bd.CreerCompte(numCompte);
    solde=bd.ObtenirSolde(numCompte);

}

int CompteClient::ObtenirNumCompte() const
{
    return numCompte;

}

