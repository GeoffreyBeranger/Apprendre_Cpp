#include "capteurhumidite.h"

using namespace std;


CapteurHumidite::CapteurHumidite(const int _brocheCapteur):
brocheCapteur(_brocheCapteur)

{
cout << "Capteur Humidite :" << brocheCapteur << endl;
}

int CapteurHumidite::MesureHumiditeDuSol()
{

    return 25;
}
