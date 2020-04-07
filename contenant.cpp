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
}
