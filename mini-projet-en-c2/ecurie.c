//
// Created by Adou on 26/10/2025.
//
#include <stdio.h>

#include "ecurie.h"

void affichageEcurie(ECURIE ecurie[], int tailleEcurie) {
    for (int i = 0; i < tailleEcurie; i++) {
        printf("nom: %-18s |pays: %-12s |points: %-3d |annee creation: %d |directeur: %-18s |actif: %d\n", ecurie[i].nom, ecurie[i].pays, ecurie[i].points, ecurie[i].anneeCreation, ecurie[i].directeur, ecurie[i].actif);
    }
}