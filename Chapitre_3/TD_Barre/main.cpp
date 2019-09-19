#include <iostream>
#include "barreoctogone.h"

using namespace std;

int main()
{

    barreOctogone uneBarre("A1234",5,5,"fer",5);

    cout << uneBarre.CalculerSection() << endl;
    cout << "La Masse de votre Barre est de : " << uneBarre.CalculerMasse() << endl;
    return 0;
}
