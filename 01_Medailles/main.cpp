#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
using namespace std; // évite d'écrire std::cout

int main()
{

  /*  bool sortie = false;
    int entier = 15;
    char car = 'a';
    cout << sortie << " " << entier << " " << car << endl;
return 0;.
*/

/*
    float temperature;
    float humidite;
    int pression;

    cout << "Saisir la temperature , l'humidité et la pression : " ;
    cin >> temperature >> humidite >> pression ;

    cout << "la température est : " << temperature << " °" << endl;
    cout << "le taux d'humidité est : " << humidite << " %" << endl;
    cout << "la pression est : " << pression << " hPa" << endl;
    return 0;

    */

    /*

    char phrase[80+1];
    cout << "Saisir une phrase : " ;
    cin.getline(phrase,80);
    cout << "Votre phrase est :" << phrase << endl;

    return 0;

    */
/*
    int val = 192;
    float val2 = 3.141592654;
    bool sortie = true;
    cout <<"Affichagepardéfaut:"<<val<<endl;
    cout <<"Affichageenhexadécimal:"<<hex<<val<<endl;
    cout <<"Affichageendécimal:"<<dec<<val<<endl;
    cout <<hex<<val<<""<<uppercase<<val<<"";
    cout <<showbase<<val<<nouppercase<<""<<val<<endl;
    cout << "+"<<setfill('-')<<setw(21)<<"+"<<setfill(' ') << endl;
    cout << "|"<<setw(20)<<left<<"abc"<<"|"<<endl;
    cout << "|"<<setw(20)<<right<<"abc"<<"|"<<endl;
    cout << "+"<<setfill('-')<<setw(21)<<"+"<<setfill(' ') << endl;
    cout << dec<<sortie<<""<<boolalpha<<sortie<<endl;
    cout << val2 << ""<<fixed<<val2<<""<<scientific<<val2<<"";
    cout << fixed<<setprecision(2)<<val2<<endl;
    cout << "Entrez un nombre en octal:";
    cin >> oct >> val;
    cout << "Vous avez saisie " << dec << val << " en décimal" << endl;
    return 0;
*/

    string nomDuFichier;

    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;

    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*

    if(!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;

    else{

        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        cout << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;

        do{

            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;

            if(leFichier.good())
            {

                cout << "|" <<setw(29) << left << pays<< "|" << setw(3) << right << nbOr << "|" << setw(3) << right << nbArgent << " | "<< setw(3) << right << nbBronze << " | " <<endl;

            }

        }while(!leFichier.eof());
        cout << "+"<<setfill('-')<<setw(30)<<"+" << setfill('-') << setw(4) << "+" << setfill('-') << setw(5)<< setfill('-') << "+"<< setw(6) << "+"<<setfill(' ') << endl;



    }

return 0;


}
