//
// Created by Adou on 26/10/2025.
//

#include "grandprix.h"
#include <stdio.h>

RESULTATCOURSE saisirResultat() {
    RESULTATCOURSE r;

    printf("Nom du pilote : ");
    scanf(" %[^\n]", r.nomPilote);

    printf("Prénom du pilote : ");
    scanf(" %[^\n]", r.prenomPilote);

    printf("Nationalité : ");
    scanf(" %[^\n]", r.nationalite);

    printf("Position : ");
    scanf("%d", &r.position);

    printf("Temps réalisé : ");
    scanf(" %[^\n]", r.tempsRealise);

    printf("Points obtenus : ");
    scanf("%d", &r.pointObtenus);

    return r;
}

    GRANDPRIX saisirGrandPrix() {
    GRANDPRIX gp;

    printf("\n=== Nouveau Grand Prix ===\n");
    printf("Nom du circuit : ");
    scanf(" %[^\n]", gp.nomCircuit);

    printf("Pays : ");
    scanf(" %[^\n]", gp.pays);

    printf("Nombre de tours : ");
    scanf("%d", &gp.nombreTours);

    printf("Date (jour mois année) : ");
    scanf("%d %d %d", &gp.date.jour, &gp.date.mois, &gp.date.annee);

    printf("Horaire (heure minute) : ");
    scanf("%d %d", &gp.horaire.heure, &gp.horaire.minute);

    printf("Nombre de résultats : ");
    scanf("%d", &gp.nombreResultats);

    for (int i = 0; i < gp.nombreResultats; i++) {
        printf("\nRésultat #%d :\n", i + 1);
        gp.resultatCourse[i] = saisirResultat();
    }

    gp.actif = 1;
    return gp;
}



void ajouterGrandPrix(GRANDPRIX grandsPrix[], int *nbGP) {
    if (*nbGP >= 20) {
        printf("Impossible d'ajouter un nouveau Grand Prix : tableau plein.\n");
        return;
    }
    grandsPrix[*nbGP] = saisirGrandPrix();
    (*nbGP)++;

    printf("Grand Prix ajoute ! Nombre de GP : %d\n", *nbGP);
}

void ajouterGrandPrixAutomatique(GRANDPRIX grandsPrix[], int *nbGP) {
    if (*nbGP >= 20) {
        printf("Impossible d'ajouter un nouveau Grand Prix : tableau plein.\n");
        return;
    }
    grandsPrix[*nbGP] = saisirGrandPrix();
    (*nbGP)++;

    printf("Grand Prix ajoute ! Nombre de GP : %d\n", *nbGP);
}

void affichageGrandPrix(GRANDPRIX grandsPrix[], int tailleGrandPrix) {
    for (int j = 0; j < tailleGrandPrix; j++) {
        GRANDPRIX gp = grandsPrix[j];

        printf("Grand Prix %d\n", j + 1);
        printf("Circuit        : %s\n", gp.nomCircuit);
        printf("Pays           : %s\n", gp.pays);
        printf("Date           : %02d/%02d/%04d\n", gp.date.jour, gp.date.mois, gp.date.annee);
        printf("Horaire        : %02d:%02d\n", gp.horaire.heure, gp.horaire.minute);
        printf("Nombre de tours: %d\n", gp.nombreTours);
        printf("Actif          : %s\n", gp.actif ? "Oui" : "Non");
        printf("Resultats (%d pilotes):\n\n", gp.nombreResultats);

        printf("%-3s %-15s %-15s %-15s %-12s %s\n",
               "Pos", "Prenom", "Nom", "Nationalite", "Temps", "Points");
        printf("-----------------------------------------------------------------------\n");

        for (int i = 0; i < gp.nombreResultats; i++) {
            RESULTATCOURSE r = gp.resultatCourse[i];
            printf("%-3d %-15s %-15s %-15s %-12s %d\n",
                   r.position,
                   r.prenomPilote,
                   r.nomPilote,
                   r.nationalite,
                   r.tempsRealise,
                   r.pointObtenus);
        }

        printf("\n");
    }
}