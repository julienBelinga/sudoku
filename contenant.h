#ifndef CONTENANT_H
#define CONTENANT_H

#define NB_COLONNES 9
#define NB_LIGNES 9
#include <iostream>
#include "Console.h"

namespace con = JadedHoboConsole;

struct plateau
{
    int grille[NB_LIGNES][NB_COLONNES];
};

void afficher_regles();
void initialiser_plateau();
void afficher_plateau();
void faire_jouer_un_coup();

class contenant
{
public:
    contenant();
};

#endif // CONTENANT_H
