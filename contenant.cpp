#include "contenant.h"

contenant::contenant()
{

}

void afficher_regles(){
    using std::cout;
    using std::endl;

    cout << "===== SUDOKU =====" << endl;
    cout << "Les règles du sudoku"
         << "Les règles du sudoku sont très simples. Un sudoku classique contient neuf lignes et neuf colonnes, donc 81 cases au total."
         << "Le but du jeu est de remplir ces cases avec des chiffres allant de 1 à 9 en veillant toujours à ce qu'un même chiffre ne figure qu'une seule fois par colonne,"
         << " une seule fois par ligne, et une seule fois par carré de neuf cases."
         << "Au début du jeu, une vingtaine de chiffres sont déjà placés et il vous reste à trouver les autres."
         << " En effet, une grille initiale de sudoku correctement constituée ne peut aboutir qu'à une et une seule solution."
         << "Pour trouver les chiffres manquants, tout est une question de logique et d'observation." << endl;

    cout << "les mauvaise réponses seront afficer en" << con::fg_red << "rouge" << con::fg_white <<
            "et les bonnes resterons en blancs." << endl;
}

void initialiser_plateau(plateau *p){
    for(int l = 0; l < NB_LIGNES; l++)
        for(int c = 0; c < NB_COLONNES; c++)
            p->grille[l][c] = VIDE;
}

void afficher_plateau(plateau p){
    using std::cout;
    using std::endl;

    cout << "---------------------" << endl;

    // affichage du numéro de colonnes
    cout << "  |";
    for(int c = 0; c < NB_COLONNES; c++)
        cout << c+1 << "|";
    cout << endl;
    cout << "   ------" << endl;

    // Affichage de la grille
    for(int l = 0; l < NB_LIGNES ; l++)
    {
        cout << l+1 << " |"; // affichage du numéro de la ligne

        for(int c = 0; c < NB_COLONNES ; c++)
        {

            switch ( p.grille[l][c] )
            {
            case VIDE:
                cout << " |";
                break;
            case c1:
                if(verifier(p) == true)
                    cout <<" 1|";
                else
                    cout <<" " << con::fg_red << "1" << con::fg_white << "|";
                break;
            case c2:
                if(verifier(p) == true)
                    cout <<" 2|";
                else
                    cout <<" " << con::fg_red << "2" << con::fg_white << "|";
                break;
            case c3:
                if(verifier(p) == true)
                    cout <<" 3|";
                else
                    cout <<" " << con::fg_red << "3" << con::fg_white << "|";
                break;
            case c4:
                if(verifier(p) == true)
                    cout <<" 4|";
                else
                    cout <<" " << con::fg_red << "4" << con::fg_white << "|";
                break;
            case c5:
                if(verifier(p) == true)
                    cout <<" 5|";
                else
                    cout <<" " << con::fg_red << "5" << con::fg_white << "|";
                break;
            case c6:
                if(verifier(p) == true)
                    cout <<" 6|";
                else
                    cout <<" " << con::fg_red << "6" << con::fg_white << "|";
                break;
            case c7:
                if(verifier(p) == true)
                    cout <<" 7|";
                else
                    cout <<" " << con::fg_red << "7" << con::fg_white << "|";
                break;
            case c8:
                if(verifier(p) == true)
                    cout <<" 8|";
                else
                    cout <<" " << con::fg_red << "8" << con::fg_white << "|";
                break;
            case c9:
                if(verifier(p) == true)
                    cout <<" 9|";
                else
                    cout <<" " << con::fg_red << "9" << con::fg_white << "|";
                break;
            }
            cout << endl;
        }
        cout << "   ------" << endl;
    }
}

int faire_jouer_un_coup(plateau *p){
    using std::cout;
    using std::cin;
    using std::endl;

    int ligne, colonne, numero_case;
    bool ok = false;

    do
    {
        cout << "Selectionnez une ligne" << endl;
        cin >> ligne;
        cout << "Selectionnez une colonne" << endl;
        cin >> colonne;

        ok = false;
        if ( ligne >= 1 && ligne <= NB_LIGNES &&
             colonne >= 1 && colonne <= NB_COLONNES )
            ok = ( p->grille[ligne - 1][colonne - 1] == VIDE );

        if ( ! ok )
        {
            cout << "Case impossible. Veuillez recommencer." << endl;
        }
    } while ( ! ok ); // tant que non ok

    cout << "Saisir un numéro (compris entre 1 et 9) : ";
    cin >> numero_case;

    switch (numero_case) {
    case 1:
         p->grille[ligne - 1][colonne - 1] = c1;
        break;
    case 2:
         p->grille[ligne - 1][colonne - 1] = c2;
        break;
    case 3:
         p->grille[ligne - 1][colonne - 1] = c3;
        break;
    case 4:
         p->grille[ligne - 1][colonne - 1] = c4;
        break;
    case 5:
         p->grille[ligne - 1][colonne - 1] = c5;
        break;
    case 6:
         p->grille[ligne - 1][colonne - 1] = c6;
        break;
    case 7:
         p->grille[ligne - 1][colonne - 1] = c7;
        break;
    case 8:
         p->grille[ligne - 1][colonne - 1] = c8;
        break;
    case 9:
         p->grille[ligne - 1][colonne - 1] = c9;
        break;
    }

    return numero_case;
}

bool verifier(plateau p){

}
