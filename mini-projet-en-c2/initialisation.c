#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "initialisation.h"
// === ECURIES ===
ECURIE *initEcuries(int *nbEcuries) {
    *nbEcuries = 5;
    ECURIE *ecuries = malloc(*nbEcuries * sizeof(ECURIE));
    if (!ecuries) {
        perror("Erreur d'allocation mémoire pour les écuries");
        exit(EXIT_FAILURE);
    }

    strcpy(ecuries[0].nom, "Red Bull Racing");
    strcpy(ecuries[0].pays, "Autriche");
    ecuries[0].points = 0;
    ecuries[0].anneeCreation = 2005;
    strcpy(ecuries[0].directeur, "Christian Horner");
    ecuries[0].actif = 1;

    strcpy(ecuries[1].nom, "Scuderia Ferrari");
    strcpy(ecuries[1].pays, "Italie");
    ecuries[1].points = 0;
    ecuries[1].anneeCreation = 1950;
    strcpy(ecuries[1].directeur, "Frédéric Vasseur");
    ecuries[1].actif = 1;

    strcpy(ecuries[2].nom, "Mercedes-AMG");
    strcpy(ecuries[2].pays, "Allemagne");
    ecuries[2].points = 0;
    ecuries[2].anneeCreation = 2010;
    strcpy(ecuries[2].directeur, "Toto Wolff");
    ecuries[2].actif = 1;

    strcpy(ecuries[3].nom, "McLaren Racing");
    strcpy(ecuries[3].pays, "Royaume-Uni");
    ecuries[3].points = 0;
    ecuries[3].anneeCreation = 1966;
    strcpy(ecuries[3].directeur, "Andrea Stella");
    ecuries[3].actif = 1;

    strcpy(ecuries[4].nom, "Aston Martin");
    strcpy(ecuries[4].pays, "Royaume-Uni");
    ecuries[4].points = 0;
    ecuries[4].anneeCreation = 2021;
    strcpy(ecuries[4].directeur, "Mike Krack");
    ecuries[4].actif = 1;

    return ecuries;
}
// === PILOTES ====
PILOTE *initPilotes(int *nbPilotes) {
    *nbPilotes = 10;
    PILOTE *pilotes = malloc(*nbPilotes * sizeof(PILOTE));
    if (!pilotes) {
        perror("Erreur d'allocation mémoire pour les pilotes");
        exit(EXIT_FAILURE);
    }

    strcpy(pilotes[0].nom, "Verstappen");
    strcpy(pilotes[0].prenom, "Max");
    strcpy(pilotes[0].nationalite, "Pays-Bas");
    strcpy(pilotes[0].ecurie, "Red Bull Racing");
    pilotes[0].points = 0;
    pilotes[0].numero = 1;
    pilotes[0].age = 27;
    pilotes[0].actif = 1;

    strcpy(pilotes[1].nom, "Perez");
    strcpy(pilotes[1].prenom, "Sergio");
    strcpy(pilotes[1].nationalite, "Mexique");
    strcpy(pilotes[1].ecurie, "Red Bull Racing");
    pilotes[1].points = 0;
    pilotes[1].numero = 11;
    pilotes[1].age = 34;
    pilotes[1].actif = 1;

    strcpy(pilotes[2].nom, "Leclerc");
    strcpy(pilotes[2].prenom, "Charles");
    strcpy(pilotes[2].nationalite, "Monaco");
    strcpy(pilotes[2].ecurie, "Scuderia Ferrari");
    pilotes[2].points = 0;
    pilotes[2].numero = 16;
    pilotes[2].age = 27;
    pilotes[2].actif = 1;

    strcpy(pilotes[3].nom, "Sainz");
    strcpy(pilotes[3].prenom, "Carlos");
    strcpy(pilotes[3].nationalite, "Espagne");
    strcpy(pilotes[3].ecurie, "Scuderia Ferrari");
    pilotes[3].points = 0;
    pilotes[3].numero = 55;
    pilotes[3].age = 30;
    pilotes[3].actif = 1;

    strcpy(pilotes[4].nom, "Hamilton");
    strcpy(pilotes[4].prenom, "Lewis");
    strcpy(pilotes[4].nationalite, "Royaume-Uni");
    strcpy(pilotes[4].ecurie, "Mercedes-AMG");
    pilotes[4].points = 0;
    pilotes[4].numero = 44;
    pilotes[4].age = 39;
    pilotes[4].actif = 1;

    strcpy(pilotes[5].nom, "Russell");
    strcpy(pilotes[5].prenom, "George");
    strcpy(pilotes[5].nationalite, "Royaume-Uni");
    strcpy(pilotes[5].ecurie, "Mercedes-AMG");
    pilotes[5].points = 0;
    pilotes[5].numero = 63;
    pilotes[5].age = 26;
    pilotes[5].actif = 1;

    strcpy(pilotes[6].nom, "Norris");
    strcpy(pilotes[6].prenom, "Lando");
    strcpy(pilotes[6].nationalite, "Royaume-Uni");
    strcpy(pilotes[6].ecurie, "McLaren Racing");
    pilotes[6].points = 0;
    pilotes[6].numero = 4;
    pilotes[6].age = 25;
    pilotes[6].actif = 1;

    strcpy(pilotes[7].nom, "Piastri");
    strcpy(pilotes[7].prenom, "Oscar");
    strcpy(pilotes[7].nationalite, "Australie");
    strcpy(pilotes[7].ecurie, "McLaren Racing");
    pilotes[7].points = 0;
    pilotes[7].numero = 81;
    pilotes[7].age = 23;
    pilotes[7].actif = 1;

    strcpy(pilotes[8].nom, "Alonso");
    strcpy(pilotes[8].prenom, "Fernando");
    strcpy(pilotes[8].nationalite, "Espagne");
    strcpy(pilotes[8].ecurie, "Aston Martin");
    pilotes[8].points = 0;
    pilotes[8].numero = 14;
    pilotes[8].age = 43;
    pilotes[8].actif = 1;

    strcpy(pilotes[9].nom, "Stroll");
    strcpy(pilotes[9].prenom, "Lance");
    strcpy(pilotes[9].nationalite, "Canada");
    strcpy(pilotes[9].ecurie, "Aston Martin");
    pilotes[9].points = 0;
    pilotes[9].numero = 18;
    pilotes[9].age = 26;
    pilotes[9].actif = 1;

    return pilotes;
}
// === GRANDS PRIX + RÉSULTATS ===
GRANDPRIX *initGrandsPrix(int *nbGP) {
    *nbGP = 3;
    GRANDPRIX *gps = malloc(*nbGP * sizeof(GRANDPRIX));
    if (!gps) {
        perror("Erreur d'allocation mémoire pour les Grands Prix");
        exit(EXIT_FAILURE);
    }

    // === GP1 Monaco ===
    strcpy(gps[0].nomCircuit, "Circuit de Monaco");
    strcpy(gps[0].pays, "Monaco");
    gps[0].nombreTours = 78;
    gps[0].date.jour = 26;
    gps[0].date.mois = 5;
    gps[0].date.annee = 2024;
    gps[0].horaire.heure = 15;
    gps[0].horaire.minute = 0;
    gps[0].nombreResultats = 10;
    gps[0].actif = 1;

    RESULTATCOURSE results1[10] = {
        {"Verstappen", "Max", "Pays-Bas", 1, "1:44:12.456", 25},
        {"Leclerc", "Charles", "Monaco", 2, "1:44:18.234", 18},
        {"Hamilton", "Lewis", "Royaume-Uni", 3, "1:44:25.678", 15},
        {"Norris", "Lando", "Royaume-Uni", 4, "1:44:32.123", 12},
        {"Sainz", "Carlos", "Espagne", 5, "1:44:39.456", 10},
        {"Russell", "George", "Royaume-Uni", 6, "1:44:45.789", 8},
        {"Perez", "Sergio", "Mexique", 7, "1:44:52.234", 6},
        {"Alonso", "Fernando", "Espagne", 8, "1:44:58.567", 4},
        {"Piastri", "Oscar", "Australie", 9, "1:45:04.890", 2},
        {"Stroll", "Lance", "Canada", 10, "1:45:11.123", 1}
    };
    memcpy(gps[0].resultatCourse, results1, sizeof(results1));

    // === GP2 Espagne ===
    strcpy(gps[1].nomCircuit, "Circuit de Barcelona-Catalunya");
    strcpy(gps[1].pays, "Espagne");
    gps[1].nombreTours = 66;
    gps[1].date = (DATE){2, 6, 2024};
    gps[1].horaire = (HEURE){15, 0};
    gps[1].nombreResultats = 10;
    gps[1].actif = 1;

    RESULTATCOURSE results2[10] = {
        {"Verstappen", "Max", "Pays-Bas", 1, "1:27:45.321", 25},
        {"Norris", "Lando", "Royaume-Uni", 2, "1:27:49.876", 18},
        {"Leclerc", "Charles", "Monaco", 3, "1:27:53.452", 15},
        {"Sainz", "Carlos", "Espagne", 4, "1:27:59.231", 12},
        {"Russell", "George", "Royaume-Uni", 5, "1:28:04.900", 10},
        {"Hamilton", "Lewis", "Royaume-Uni", 6, "1:28:11.345", 8},
        {"Alonso", "Fernando", "Espagne", 7, "1:28:18.012", 6},
        {"Perez", "Sergio", "Mexique", 8, "1:28:22.678", 4},
        {"Piastri", "Oscar", "Australie", 9, "1:28:28.456", 2},
        {"Gasly", "Pierre", "France", 10, "1:28:32.789", 1}
    };
    memcpy(gps[1].resultatCourse, results2, sizeof(results2));

    // === GP3 Canada ===
    strcpy(gps[2].nomCircuit, "Circuit Gilles-Villeneuve");
    strcpy(gps[2].pays, "Canada");
    gps[2].nombreTours = 70;
    gps[2].date = (DATE){9, 6, 2024};
    gps[2].horaire = (HEURE){20, 0};
    gps[2].nombreResultats = 10;
    gps[2].actif = 1;

    RESULTATCOURSE results3[10] = {
        {"Leclerc", "Charles", "Monaco", 1, "1:35:22.678", 25},
        {"Verstappen", "Max", "Pays-Bas", 2, "1:35:27.890", 18},
        {"Hamilton", "Lewis", "Royaume-Uni", 3, "1:35:33.112", 15},
        {"Norris", "Lando", "Royaume-Uni", 4, "1:35:39.876", 12},
        {"Perez", "Sergio", "Mexique", 5, "1:35:44.210", 10},
        {"Russell", "George", "Royaume-Uni", 6, "1:35:50.678", 8},
        {"Alonso", "Fernando", "Espagne", 7, "1:35:57.432", 6},
        {"Gasly", "Pierre", "France", 8, "1:36:02.765", 4},
        {"Piastri", "Oscar", "Australie", 9, "1:36:08.210", 2},
        {"Stroll", "Lance", "Canada", 10, "1:36:12.543", 1}
    };
    memcpy(gps[2].resultatCourse, results3, sizeof(results3));
    return gps;
}