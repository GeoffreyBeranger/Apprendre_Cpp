#ifndef VECTEUR_H
#define VECTEUR_H
#include "iostream"

using namespace std;

template<typename TYPE>
class Vecteur
{
private:
    TYPE x;
    TYPE y;
public:
    Vecteur();
    Vecteur(const TYPE _x,const TYPE _y);
    TYPE getX() const;
    TYPE getY() const;
    void setY(const TYPE &value);
    void setX(const TYPE &value);
    Vecteur<TYPE> operator + (const TYPE _x) const;
    void Afficher();
};

#endif // VECTEUR_H



template<typename TYPE>
Vecteur<TYPE>::Vecteur(const TYPE _x, const TYPE _y):
    x(_x),
    y(_y)
{

}

template<typename TYPE>
TYPE Vecteur<TYPE>::getX()const
{
    return x;
}

template<typename TYPE>
void Vecteur<TYPE>::setX(const TYPE &value)
{
    x = value;
}

template<typename TYPE>
TYPE Vecteur<TYPE>::getY()const
{
    return y;
}

template<typename TYPE>
void Vecteur<TYPE>::setY(const TYPE &value)
{
    y = value;
}

template<typename TYPE>
Vecteur<TYPE> Vecteur<TYPE>::operator+(Vecteur <TYPE> const &_autre)
{
    return Vecteur <TYPE> (x +_autre.x,y +_autre.y);
}

template<typename TYPE>
void Vecteur<TYPE>::Afficher()
{
    cout << "("<< x <<","<< y <<")" << endl;
}
