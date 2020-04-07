#include "plateau.h"

Plateau::Plateau()
{

}

plateau creer(plateau r){
    int numero;

    for(int l = 0; l < NB_LIGNES; l++)
        for(int c = 0; c < NB_COLONNES; c++){
            numero = rand() % 9 + 1;
            if (r.grille[l][c - 1] = numero)

        }

    return r;
}
