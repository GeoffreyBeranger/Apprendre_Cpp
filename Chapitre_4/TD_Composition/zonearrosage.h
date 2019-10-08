#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#define gpio_num_t int

#include "vanne.h"
#include "capteurhumidite.h"
#include "iostream"


class ZoneArrosage
{
public:
    ZoneArrosage(const int _numZone, const gpio_num_t _commandeVanne, const gpio_num_t _senseAVanne, const gpio_num_t _senseBVanne, const gpio_num_t _brocheHumidite);
    void Piloter();
private:
    Vanne laVanne;
    CapteurHumidite leCapteurHumidite;
    int numZone;
};

#endif // ZONEARROSAGE_H
