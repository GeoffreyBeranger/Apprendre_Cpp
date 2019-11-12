#include <iostream>
#include "vecteur.h"

using namespace std;

int main()
{
    Vecteur<int> v1(4,5);

    Vecteur<int> v2(10,8);

    v1.Afficher();
    v2.Afficher();
    v1 = v1 + v2;
    v1.Afficher();
    return 0;
}
