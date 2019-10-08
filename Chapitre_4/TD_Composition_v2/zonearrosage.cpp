#include "zonearrosage.h"
#include "vanne.h"
#include "capteurhumidite.h"
ZoneArrosage::ZoneArrosage(string _initialisationZone)
{
    int parametres[5];
    size_t prec = 0;
    size_t pos = 0;
    for(int indice = 0; indice < 5;indice++){
    pos = _initialisationZone.find(' ',prec);
    parametres[indice] = atoi(_initialisationZone.substr(prec,pos).c_str());
    prec = pos + 1;
    }
numZone = parametres[0];
laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);
leCapteurHumidite = new CapteurHumidite(parametres[4]);
    cout << "Constructeur de ZoneArrosage N°" << numZone << endl;
}

void ZoneArrosage::Piloter()
{
    laVanne->Ouvrir();

   if(leCapteurHumidite->MesurerHumiditeDuSol() > 80){
    laVanne->Fermer();
      }

}

ZoneArrosage::~ZoneArrosage()
{
    delete laVanne;
}
