#include "compte.h"


using namespace  std;


Compte::Compte(const float _montant_initial):
    solde(_montant_initial)
{
    //cout << "Constructeur de la Classe Compte" << endl;
}

Compte::Compte():
    solde(0)
{
    //cout << "Constructeur de la classe Compte" << endl;
}


Compte::~Compte()
{
    // cout << "Destructeur de la classe Compte" << endl;
}

void Compte::ConsulterSolde()
{

    cout << "Le Solde de Votre Compte est de : " << solde << endl;

}

void Compte::Deposer(const float _montant)
{
    float montant = _montant;

    solde += montant;

}

void Compte::Retirer(const float _montant)
{
    float montant = _montant;


    if(solde > montant)
    {

        solde -= montant;
    }


}


