#include "menu.h"


using namespace std;
Menu::Menu(const string _nom):nom(_nom), longueurMax(0)
{

    ifstream fichierMenu(_nom.c_str());
    if(!fichierMenu .is_open()){
        cout << "Erreur lors de l'ouverture du fichier menu"<<endl;
        nbOptions = 0;
    } else {
        int nbLignes = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        nbOptions = nbLignes;
        fichierMenu.seekg(0,ios::beg); // On retourne au début du fichier

        options = new string [nbOptions];
        for (int i=0; i<nbOptions; i++){
            getline(fichierMenu,options[i]);
            if(static_cast<int>(options[i].length())>longueurMax){
                longueurMax = static_cast<int>(options[i].length());
            }
        }
    }
}

Menu::~Menu()
{
    delete [] options;
}
int Menu::Afficher()
{
    int choix;
    bool passage = false;

    do{
        system("clear");
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl;
        for (int i=0; i<nbOptions; i++){
            cout << "|  " << left << i+1 << right << "  " << "|" << " "  << options[i] << " " << "|" << endl;
        }
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+3) << "+" << endl <<endl;

        if(passage==false){
            cout << "Votre choix svp : ";
            passage=true;
        }else{

            cout << "Entrer un nombre entre 1"<< " et " << nbOptions << ": ";
        }
        if(!(cin>>choix)){
            cin.clear();
            cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
            choix=-1;
        }
    }while((choix<1) || (choix>nbOptions));


    return choix;
}




void Menu::AttendreAppuiTouche()
{

    string uneChaine;
    cout << endl << "Appuyer sur la Touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    system("clear");

}



