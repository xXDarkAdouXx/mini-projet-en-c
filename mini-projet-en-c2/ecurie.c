//
// Created by Adou on 26/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ecurie.h"
#include "pilote.h"

void affichageEcurie(ECURIE ecurie[], int tailleEcurie) {
    for (int i = 0; i < tailleEcurie; i++) {
        printf("nom: %-18s |pays: %-12s |points: %-3d |annee creation: %d |directeur: %-18s |actif: %d\n", ecurie[i].nom, ecurie[i].pays, ecurie[i].points, ecurie[i].anneeCreation, ecurie[i].directeur, ecurie[i].actif);
    }
}

void ajoutEcurie(ECURIE **ecurie, int *tailleEcurie) {
    // Realloc de la mémoire pour une nouvelle écurie
    *ecurie = realloc(*ecurie, (*tailleEcurie + 1) * sizeof(ECURIE));
    if (*ecurie == NULL) {
        perror("Erreur de réallocation mémoire");
        exit(EXIT_FAILURE);
    }
    ECURIE *e = &((*ecurie)[*tailleEcurie]);
    printf("\n=== Création d'une nouvelle écurie ===\n");
    printf("Nom de l'écurie : ");
    scanf(" %[^\n]", e->nom);
    printf("Pays : ");
    scanf(" %[^\n]", e->pays);
    printf("Points : ");
    scanf("%d", &e->points);
    printf("Année de création : ");
    scanf("%d", &e->anneeCreation);
    printf("Nom du directeur : ");
    scanf(" %[^\n]", e->directeur);
    printf("Active (1 = oui, 0 = non) : ");
    scanf("%d", &e->actif);
}

void calculPointEcurie(ECURIE ecurie[],int tailleEcurie, PILOTE pilotes[], int nbPilotes) {
    for (int k = 0; k < tailleEcurie; k++) {
        ecurie[k].points = 0;
    }
    for (int i = 0; i < nbPilotes; i++) {

        for (int j = 0; j < tailleEcurie; j++) {

            if (strcmp(pilotes[i].ecurie, ecurie[j].nom) == 0) {
                ecurie[j].points += pilotes[i].points;
            }
        }
    }
}