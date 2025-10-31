#include <stdio.h>
#include <string.h>
#include "classement.h"
#include "ecurie.h"
#include "pilote.h"
#include "grandprix.h"

//commandes pilotes
//affichagePilotes(pilotes, sizeof(pilotes) / sizeof(pilotes[0]));




int main(void) {

    // Initialisation des écuries
    ECURIE ecuries[5] = {
        {"Red Bull Racing", "Autriche", 0, 2005, "Christian Horner", 1},
        {"Scuderia Ferrari", "Italie", 0, 1950, "Frédéric Vasseur", 1},
        {"Mercedes-AMG", "Allemagne", 0, 2010, "Toto Wolff", 1},
        {"McLaren Racing", "Royaume-Uni", 0, 1966, "Andrea Stella", 1},
        {"Aston Martin", "Royaume-Uni", 0, 2021, "Mike Krack", 1}
    };

    // Initialisation des pilotes
    PILOTE pilotes[10] = {
        {"Verstappen", "Max", "Pays-Bas", "Red Bull Racing", 0, 1, 27, 1},
        {"Perez", "Sergio", "Mexique", "Red Bull Racing", 0, 11, 34, 1},
        {"Leclerc", "Charles", "Monaco", "Scuderia Ferrari", 0, 16, 27, 1},
        {"Sainz", "Carlos", "Espagne", "Scuderia Ferrari", 0, 55, 30, 1},
        {"Hamilton", "Lewis", "Royaume-Uni", "Mercedes-AMG", 0, 44, 39, 1},
        {"Russell", "George", "Royaume-Uni", "Mercedes-AMG", 0, 63, 26, 1},
        {"Norris", "Lando", "Royaume-Uni", "McLaren Racing", 0, 4, 25, 1},
        {"Piastri", "Oscar", "Australie", "McLaren Racing", 0, 81, 23, 1},
        {"Alonso", "Fernando", "Espagne", "Aston Martin", 0, 14, 43, 1},
        {"Stroll", "Lance", "Canada", "Aston Martin", 0, 18, 26, 1}
    };

    GRANDPRIX grandsPrix[20];
    int nbGP = 0;

     // === GRAND PRIX 1 : Monaco ===
    GRANDPRIX gp1;
    strcpy(gp1.nomCircuit, "Circuit de Monaco");
    strcpy(gp1.pays, "Monaco");
    gp1.nombreTours = 78;
    gp1.date = (DATE){26, 5, 2024};
    gp1.horaire = (HEURE){15, 00};
    gp1.nombreResultats = 10;
    gp1.actif = 1;

    RESULTATCOURSE resultats1[10] = {
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

    for (int i = 0; i < gp1.nombreResultats; i++) {
        gp1.resultatCourse[i] = resultats1[i];
    }
    grandsPrix[nbGP++] = gp1;

    // === GRAND PRIX 2 : Espagne ===
    GRANDPRIX gp2;
    strcpy(gp2.nomCircuit, "Circuit de Barcelona-Catalunya");
    strcpy(gp2.pays, "Espagne");
    gp2.nombreTours = 66;
    gp2.date = (DATE){2, 6, 2024};
    gp2.horaire = (HEURE){15, 00};
    gp2.nombreResultats = 10;
    gp2.actif = 1;

    RESULTATCOURSE resultats2[10] = {
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

    for (int i = 0; i < gp2.nombreResultats; i++) {
        gp2.resultatCourse[i] = resultats2[i];
    }
    grandsPrix[nbGP++] = gp2;

    // === GRAND PRIX 3 : Canada ===
    GRANDPRIX gp3;
    strcpy(gp3.nomCircuit, "Circuit Gilles-Villeneuve");
    strcpy(gp3.pays, "Canada");
    gp3.nombreTours = 70;
    gp3.date = (DATE){9, 6, 2024};
    gp3.horaire = (HEURE){20, 00};
    gp3.nombreResultats = 10;
    gp3.actif = 1;

    RESULTATCOURSE resultats3[10] = {
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

    for (int i = 0; i < gp3.nombreResultats; i++) {
        gp3.resultatCourse[i] = resultats3[i];
    }
    grandsPrix[nbGP++] = gp3;

    pointPilotes(grandsPrix, nbGP, pilotes, sizeof(pilotes) / sizeof(pilotes[0]));
    //ajouterGrandPrixAutomatique(grandsPrix, &nbGP);
    //affichagePilotes(pilotes, sizeof(pilotes) / sizeof(pilotes[0]));
    //affichageEcurie(ecuries, sizeof(ecuries) / sizeof(ecuries[0]));

    return 0;
}