//
// Created by Adou on 26/10/2025.
//

#ifndef INITIALISATION_H
#define INITIALISATION_H

#include "ecurie.h"
#include "pilote.h"
#include "grandprix.h"

// Initialize data functions
ECURIE *initEcuries(int *nbEcuries);
PILOTE *initPilotes(int *nbPilotes);
GRANDPRIX *initGrandsPrix(int *nbGP);

#endif //INITIALISATION_H