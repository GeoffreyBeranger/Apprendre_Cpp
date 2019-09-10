#include "ipv4.h"

/**
 * @brief IPv4::CalculerMasque
 * @param _cidr
 * @details : Calcul le masque du réseau à partir de CIR
 */


void IPv4::CalculerMasque(unsigned char _cidr)
{

    int indice;
    // le Masque est remis à 0 -> 0.0.0.0
    for(indice =0; indice < 4;indice++)
        masque[indice] = 0;
    indice = 0;
    //tant que le cidr est un multiple de 8
    while(_cidr >= 8){

        masque[indice++] = 255;
        _cidr -= 8;
    }
    //Complément pour la fin du cidr(<8)
    unsigned char puissance = 128;
    while(_cidr-- > 0)//Après le test de la variable _cidr est décrémentée
    {   //Les puissances de 2 sont ajoutées à l'octet par valeur décroissante

        masque[indice] += puissance;
        puissance /=2;

    }


}
/**
 * @brief IPv4::IPv4
 * @details Constructeur de la classe IPv4, initialise le masque et l'adresse
 * @param _adresse
 * @param _cidr
 */

IPv4::IPv4(const unsigned char *_adresse, const unsigned char _cidr)
{

    adresse = new unsigned char [4];
    masque = new unsigned char [4];

    for(int indice=0;indice<4;indice++)
        adresse[indice]=_adresse[indice];
    if(_cidr<=32)
        CalculerMasque(_cidr);
}

/**
 * @brief IPv4::IPv4
 * @details Constructeur de la classe, initialise l'adresse et le masque
 *          alloue la mémoire pour adresse et masque
 * @param _adresse
 * @param _masque
 */


IPv4::IPv4(const unsigned char *_adresse, const unsigned char *_masque)
{

    adresse = new unsigned char[4];
    masque=new unsigned char[4];
    for(int indice=0;indice<4;indice++)
    {
        adresse[indice]=_adresse[indice];
        masque[indice]=_masque[indice];

    }
}

IPv4::~IPv4()
{

    delete [] adresse;
    delete [] masque;

}

void IPv4::ObtenirMasque(unsigned char *_masque)
{

    for(int indice = 0;indice < 4;indice++)
        _masque[indice] = masque[indice];

}

void IPv4::ObtenirAdresseReseau(unsigned char *_reseau)
{

    for(int indice = 0;indice < 4;indice++)
        _reseau[indice] = adresse[indice] & masque[indice];

}

void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{

    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0;indice < 4;indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice];

}

void IPv4::ObtenirPremiereAdresse(unsigned char *_reseau)
{

    _reseau[4] +=1;

}


