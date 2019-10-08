#ifndef CARTON_H
#define CARTON_H
#include "contenant.h"

/**
 * @brief The carton class
 */
class carton : public contenant
{
public:
    carton(const int _largeur, const int _hauteur, const int _profondeur,const float _poidsMaxi);
    ~carton();
    float ObtenirPoidsMax();
private:
    float poidsMaxi;
};

#endif // CARTON_H
