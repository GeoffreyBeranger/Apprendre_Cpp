#include "vanne.h"


Vanne::Vanne(const int _impulsion,const int _sensA,const int _sensB):impulsion(_impulsion),sensA(_sensA),sensB(_sensB)
{
    cout << "Vanne " << impulsion << " - " << sensA << " - " << sensB << endl;
}

void Vanne::Ouvrir()
{
    cout << "C'est ouvert" << endl;
}

void Vanne::Fermer()
{
    cout << "C'est fermé" << endl;
}
