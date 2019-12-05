#include "barquette.h"
#include "partieoperative.h"



Barquette::Barquette(const quint8 _emplacement, const QString _codeBarre, QObject *parent):
    QThread (parent),
    codeBarre(_codeBarre),
    emplacement(_emplacement)
{

    QMessageBox msgBox;
    msgBox.setText(" Une nouvelle barquette a été créée");
    msgBox.exec();
    synchro.release();

}

Barquette::~Barquette()
{

}

void Barquette::Run()
{

    qDebug() << "Methode Run";
    quint8 masque = 0x01;
    quint8 numCapteur = 0;
    bool frontMontant = false;

    while (numCapteur < emplacement)
    {

        synchro.acquire();

        if (etatCapteur && numCapteur == masque)
        {

            frontMontant = true;


        }else if(frontMontant == true)
        {

            numCapteur = numCapteur+1;
            masque <<=1;
            frontMontant = false;

        }

        qDebug() << "numEjecteur: "<< numCapteur << " masque: "<< masque;
    }

    emit EjecteurTrouve();



}

QString Barquette::ObtenirCodeBarre()
{

    return codeBarre;

}

quint8 Barquette::ObtenirEmplacement()
{

    return emplacement;

}

void Barquette::onCapteurChange(quint8 octet)
{

    qDebug() << "Capteur Changés";
    etatCapteur = octet;
    synchro.release();


}
