//
// Created by Adou on 26/10/2025.
//

#include "pilote.h"
#include <stdio.h>
#include <string.h>


#include <stdio.h>
#include "pilote.h"  // ou le fichier où PILOTE est défini


void pointPilotes(GRANDPRIX grandsPrix[], int tailleGrandPrix, PILOTE pilotes[], int nbPilotes) {
    for (int k = 0; k < nbPilotes; k++) {
        pilotes[k].points = 0;
    }
    for (int i = 0; i < tailleGrandPrix; i++) {
        for (int j = 0; j < grandsPrix[i].nombreResultats; j++) {
            RESULTATCOURSE r = grandsPrix[i].resultatCourse[j];

            for (int k = 0; k < nbPilotes; k++) {
                if (strcmp(pilotes[k].nom, r.nomPilote) == 0 &&
                    strcmp(pilotes[k].prenom, r.prenomPilote) == 0) {
                    pilotes[k].points += r.pointObtenus;
                    }
            }
        }
    }
}

void affichagePilotes(PILOTE pilote[], int taillePilote) {
    printf("| %-10s | %-8s | %-12s | %-17s | %-6s | %-6s | %-4s | %-5s |\n",
           "Nom", "Prenom", "Nationalite", "Ecurie", "Points", "Numero", "Age", "Actif");
    for (int i = 0; i < taillePilote; i++) {
        printf("| %-10s | %-8s | %-12s | %-17s | %-6d | %-6d | %-4d | %-5d |\n",
               pilote[i].nom,
               pilote[i].prenom,
               pilote[i].nationalite,
               pilote[i].ecurie,
               pilote[i].points,
               pilote[i].numero,
               pilote[i].age,
               pilote[i].actif);
    }
}


