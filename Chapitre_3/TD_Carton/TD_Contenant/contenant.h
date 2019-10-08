#ifndef CONTENANT_H
#define CONTENANT_H

/**
 * @brief The contenant class
 */
class contenant
{
public:
    contenant(const int _largeur, const int _hauteur, const int _profondeur);
    ~contenant();
    int CalculerVolume();
protected:
    int largeur;
    int hauteur;
    int profondeur;
};

#endif // CONTENANT_H
