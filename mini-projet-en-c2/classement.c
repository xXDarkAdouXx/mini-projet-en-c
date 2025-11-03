//
// Created by Adou on 26/10/2025.
//

#include <stdio.h>

#include "classement.h"




void affichageClassementCourse(GRANDPRIX grandsPrix[], int tailleGrandPrix) {

    for (int j = 0; j < tailleGrandPrix; j++) {
        printf("|%-12s|%-35s|%-15s|%-15s\n",
       "Num GP:", "Circuit:", "Date:", "Nombre de tours:");
        GRANDPRIX gp = grandsPrix[j];
        printf("|%-12d|%-35s|%02d/%02d/%-9d| %-15d\n",
            j+1,
            gp.nomCircuit,
            gp.date.jour, gp.date.mois, gp.date.annee,
            gp.nombreTours);
        printf("\n");



        printf("%-12s| %-15s| %-15s| %-15s| %-12s| %s\n",
               "Classement", "Prenom", "Nom", "Nationalite", "Temps", "Points");

        for (int i = 0; i < gp.nombreResultats; i++) {
            RESULTATCOURSE r = gp.resultatCourse[i];
            printf("%-12d| %-15s| %-15s| %-15s| %-12s| %d\n",
                   r.position,
                   r.prenomPilote,
                   r.nomPilote,
                   r.nationalite,
                   r.tempsRealise,
                   r.pointObtenus);
        }
        printf("--------------------------------------------------------------------------------------");

        printf("\n");
    }
}



void affichageClassementPilotes(PILOTE pilote[], int taillePilote) {
    printf("\n");
    for (int i = 0; i < taillePilote - 1; i++) {
        for (int j = i + 1; j < taillePilote; j++) {
            if (pilote[i].points < pilote[j].points) {
                PILOTE temp = pilote[i];
                pilote[i] = pilote[j];
                pilote[j] = temp;
            }
        }
    }

    printf("Classement des Pilotes:\n");
    printf("| %-11s | %-6s | %-10s | %-8s | %-17s | %-6s |\n",
           "Classement", "Numero", "Nom", "Prenom", "Ecurie", "Points");

    for (int i = 0; i < taillePilote; i++) {
        printf("| %-11d | %-6d | %-10s | %-8s | %-17s | %-6d |\n",
               i + 1,
               pilote[i].numero,
               pilote[i].nom,
               pilote[i].prenom,
               pilote[i].ecurie,
               pilote[i].points);
    }
}


void affichageClassementEcurie(ECURIE ecurie[], int tailleEcurie) {
    printf("\n");
    for (int i = 0; i < tailleEcurie - 1; i++) {
        for (int j = i + 1; j < tailleEcurie; j++) {
            if (ecurie[i].points < ecurie[j].points) {
                ECURIE temp = ecurie[i];
                ecurie[i] = ecurie[j];
                ecurie[j] = temp;
            }
        }
    }
    printf("Classement des écuries:\n");
    printf("\n");
    for (int i = 0; i < tailleEcurie; i++) {
        printf("|%2d. %-18s| Points: %-3d |\n",
               i + 1,
               ecurie[i].nom,
               ecurie[i].points);
    }
}