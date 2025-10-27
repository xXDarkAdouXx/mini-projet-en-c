//
// Created by Adou on 26/10/2025.
//

#include "pilote.h"

#include <stdio.h>
#include <string.h>


void affichagePilotes(PILOTE pilote[], int taillePilote) {
    for (int i = 0; i < taillePilote; i++) {
        printf("nom: %-10s | prenom: %-8s | nationalite: %-11s | ecurie: %-15s | points: %d | numero: %-2d \nage: %d | actif: %d\n\n", pilote[i].nom, pilote[i].prenom, pilote[i].nationalite, pilote[i].ecurie, pilote[i].points, pilote[i].numero, pilote[i].age, pilote[i].actif);
    }
}

