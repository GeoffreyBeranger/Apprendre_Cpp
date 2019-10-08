#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include "vanne.h"
#include "capteurhumidite.h"
class ZoneArrosage
{
private:
    Vanne *laVanne;
    CapteurHumidite *leCapteurHumidite;
    int numZone;
public:
    ZoneArrosage(string _initialisationZone);
    void Piloter();
    ~ZoneArrosage();
};

#endif // ZONEARROSAGE_H
