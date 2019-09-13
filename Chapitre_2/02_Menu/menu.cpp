#include "menu.h"


using namespace std;
/**
 * @brief Menu::Menu
 * @param _nom
 * @details Constructeur de la classe Menu qui initialise le nom et la longueurMax, On verifie si le fichier est ouvert
 *          sinon on affiche un msg d'erreur,  attribution de la valeur longueurMax par lecture de toute les lignes du fichier
 */
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

/**
 * @brief Menu::Afficher
 * @return
 * @details Methode Afficher qui affiche un tableau adaptatif en fonction du nombre d'options et de la longueurMax de la plus longue option
 */

int Menu::Afficher()
{
    int choix;
    bool passage = false;

    do{
        system("clear");
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+2) << "+" << endl;
        for (int i=0; i<nbOptions; i++){
            int longueurOptions =  longueurMax - static_cast<int>(options[i].length()) + 1;
            cout << "|  " << left << i+1 << right << "  " << "| "  <<  options[i] << setfill(' ') << setw(longueurOptions) << "|" << endl;
        }
        cout << "+" << setfill('-') << setw(6) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+2) << "+" << endl <<endl;

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


/**
 * @brief Menu::AttendreAppuiTouche
 * @details Methode AttendreAppuiTouhche qui attends qu'on appuie sur une touche pour reafficher le tableau
 */
void Menu::AttendreAppuiTouche()
{

    string uneChaine;
    cout << endl << "Appuyer sur la Touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    system("clear");

}



