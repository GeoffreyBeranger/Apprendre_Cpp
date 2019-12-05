#include "barquette.h"



Barquette::Barquette(const int _emplacement, const QString _codeBarre, QObject *parent):
    QThread (parent),
    codeBarre(_codeBarre),
    emplacement(_emplacement)
{



}

Barquette::~Barquette()
{

}

void Barquette::Run()
{


    quint8 masque = 0x01;
    int numCapteur = 0;
    bool frontMontant = false;

    while (numCapteur < emplacement)
    {

        synchro.acquire();

        if (EtatCapteur && numCapteur == masque)
        {

            frontMontant = true;


        }else if(frontMontant == true)
        {

            numCapteur = numCapteur+1;
            masque = masque << 1;
            frontMontant = false;

        }

    }

    emit EjecteurTrouve();



}

QString Barquette::ObtenirCodeBarre()
{

    return codeBarre;

}

void Barquette::CapteurChange()
{

    synchro.release();

}
