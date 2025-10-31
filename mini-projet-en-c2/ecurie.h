//
// Created by Adou on 26/10/2025.
//

#ifndef ECURIE_H
#define ECURIE_H

typedef struct {
    char nom[50];
    char pays[50];
    int points;
    int anneeCreation;
    char directeur[50];
    int actif;
}ECURIE;


void affichageEcurie(ECURIE ecurie[], int tailleEcurie);

#endif //ECURIE_H