#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string nomDuFichier;

        cout << "Entrer le nom du fichier à lire : ";
        cin >> nomDuFichier;

        //Création du flux en lecture sur le fichier
        fstream leFichier(nomDuFichier , fstream::in | fstream::out); // c_str() transforme string en char*

       //Création d'un fichier d'export
        ofstream fichierExport("export.txt");

        if(!leFichier .is_open())
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
        if(!fichierExport .is_open())
            cerr << "Erreur lors de la création du fichier export "<< endl;

        else{

            string pays;
            int nbOr;
            int nbArgent;
            int nbBronze;

            fichierExport << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;

            do{

                leFichier >> pays >> nbOr >> nbArgent >> nbBronze;

                if(leFichier.good())
                {

                    fichierExport << "|" <<setw(29) << left << pays<< "|" << setw(3) << right << nbOr << "|" << setw(3) << right << nbArgent << " | "<< setw(3) << right << nbBronze << " | " <<endl;

                }

            }while(!leFichier.eof());
            fichierExport << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;



        }
        fichierExport.close();

    return 0;
}
