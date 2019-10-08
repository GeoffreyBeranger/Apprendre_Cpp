#include "zonearrosage.h"



ZoneArrosage::ZoneArrosage(const int _numZone, const int _commandeVanne, const int _senseAVanne, const int _sensBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_sensBVanne),
    leCapteurHumidite(_brocheHumidite),
    numZone(_numZone)
{

}

void ZoneArrosage::Piloter()
{

    laVanne.Ouvrir();

            if(leCapteurHumidite.MesureHumiditeDuSol() > 60){
                laVanne.Fermer();
            }

}
