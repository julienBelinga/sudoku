#ifndef PLATEAU_H
#define PLATEAU_H

#include "contenant.h"


class Plateau
{
public:
    Plateau();

private:
    plateau jeu;
    plateau reference;

    void comparer(plateau j, plateau r);
    plateau creer(plateau r);
};

#endif // PLATEAU_H
