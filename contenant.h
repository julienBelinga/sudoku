#ifndef CONTENANT_H
#define CONTENANT_H

#define NB_COLONNES 9
#define NB_LIGNES 9
#include <iostream>
#include "Console.h"

namespace con = JadedHoboConsole;

enum type_case
{
    VIDE,c1,c2,c3,c4,c5,c6,c7,c8,c9
};

struct plateau
{
    type_case grille[NB_LIGNES][NB_COLONNES];
};

void afficher_regles();
void initialiser_plateau(plateau *p);
void afficher_plateau(plateau p);
int faire_jouer_un_coup(plateau *p);
bool verifier(plateau p);

class contenant
{
public:
    contenant();
};

#endif // CONTENANT_H
