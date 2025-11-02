//
// Created by Adou on 26/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include "ecurie.h"

void affichageEcurie(ECURIE ecurie[], int tailleEcurie) {
    for (int i = 0; i < tailleEcurie; i++) {
        printf("nom: %-18s |pays: %-12s |points: %-3d |annee creation: %d |directeur: %-18s |actif: %d\n", ecurie[i].nom, ecurie[i].pays, ecurie[i].points, ecurie[i].anneeCreation, ecurie[i].directeur, ecurie[i].actif);
    }
}
/*
void ajoutEcurie(ECURIE **ecurie, int *tailleEcurie) {
    // Reallocate memory for one more ECURIE
    *ecurie = realloc(*ecurie, (*tailleEcurie + 1) * sizeof(ECURIE));
    if (*ecurie == NULL) {
        perror("Erreur de réallocation mémoire");
        exit(EXIT_FAILURE);
    }
    printf("Outil de création écurie...");
    printf("Quel nom aura l'écurie ? ");
    scanf("%s", ecurie[tailleEcurie].nom);
    printf("De quel pays est originaire l'écurie ? ");
    scanf("%s", ecurie[tailleEcurie].pays);
    printf("Combien de points possède l'écurie ? ");
    scanf("%d", ecurie[tailleEcurie].points);
    printf("En quelle année à été crée l'écurie ? ");
    scanf("%d", ecurie[tailleEcurie].anneeCreation);
    printf("Qui est le directeur l'écurie ? ");
    scanf("%s", ecurie[tailleEcurie].directeur);
    printf("Est ce que l'écurie est active ? ");
    scanf("%d", ecurie[tailleEcurie].actif);
}
*/