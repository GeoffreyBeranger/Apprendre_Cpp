#include <iostream>
#include "ipv4.h"

using namespace std;

void AfficherTableau(unsigned char *tab){

    for (int indice = 0;indice < 4;indice++) {
        cout << (int) tab[indice];
        if(indice < 3)
            cout << ".";
    }

    cout << endl;
}

int main()
{

    unsigned char adresse[4]={192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    IPv4 uneAdresse(adresse,24);
    //instanciationdelaclasse IPv4
    cout<<"AdresseIPv4:";
    AfficherTableau(adresse);uneAdresse.ObtenirMasque(masque); //appeld'uneméthode
    cout<<"Masque:";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout<<"Réseau :";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout<<"Diffusion :";
    AfficherTableau(diffusion);
    uneAdresse.ObtenirPremiereAdresse(adresse);
    cout<<"Première Adresse:";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout<<"Dernière Adresse:";
    AfficherTableau(diffusion);
}




