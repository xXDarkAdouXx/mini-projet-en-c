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

     // === GRAND PRIX 1 : Monaco ===
    GRANDPRIX gp1;
    strcpy(gp1.nomCircuit, "Circuit de Monaco");
    strcpy(gp1.pays, "Monaco");
    gp1.nombreTours = 78;
    gp1.date = (DATE){26, 5, 2024};
    gp1.horaire = (HEURE){15, 0};
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

    for (int i = 0; i < 10; i++) {
        gp1.resultatCourse[i] = resultats1[i];
    }

    // === GRAND PRIX 2 : Espagne ===
    GRANDPRIX gp2;
    strcpy(gp2.nomCircuit, "Circuit de Barcelona-Catalunya");
    strcpy(gp2.pays, "Espagne");
    gp2.nombreTours = 66;
    gp2.date = (DATE){2, 6, 2024};
    gp2.horaire = (HEURE){15, 0};
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

    for (int i = 0; i < 10; i++) {
        gp2.resultatCourse[i] = resultats2[i];
    }

    // === GRAND PRIX 3 : Canada ===
    GRANDPRIX gp3;
    strcpy(gp3.nomCircuit, "Circuit Gilles-Villeneuve");
    strcpy(gp3.pays, "Canada");
    gp3.nombreTours = 70;
    gp3.date = (DATE){9, 6, 2024};
    gp3.horaire = (HEURE){20, 0};
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

    for (int i = 0; i < 10; i++) {
        gp3.resultatCourse[i] = resultats3[i];
    }

    // === GRAND PRIX 4 : Autriche ===
    GRANDPRIX gp4;
    strcpy(gp4.nomCircuit, "Red Bull Ring");
    strcpy(gp4.pays, "Autriche");
    gp4.nombreTours = 71;
    gp4.date = (DATE){30, 6, 2024};
    gp4.horaire = (HEURE){15, 0};
    gp4.nombreResultats = 10;
    gp4.actif = 1;

    RESULTATCOURSE resultats4[10] = {
        {"Verstappen", "Max", "Pays-Bas", 1, "1:21:18.890", 25},
        {"Norris", "Lando", "Royaume-Uni", 2, "1:21:22.456", 18},
        {"Russell", "George", "Royaume-Uni", 3, "1:21:28.123", 15},
        {"Leclerc", "Charles", "Monaco", 4, "1:21:32.789", 12},
        {"Sainz", "Carlos", "Espagne", 5, "1:21:38.210", 10},
        {"Hamilton", "Lewis", "Royaume-Uni", 6, "1:21:44.567", 8},
        {"Perez", "Sergio", "Mexique", 7, "1:21:49.890", 6},
        {"Alonso", "Fernando", "Espagne", 8, "1:21:55.123", 4},
        {"Piastri", "Oscar", "Australie", 9, "1:22:00.678", 2},
        {"Gasly", "Pierre", "France", 10, "1:22:05.345", 1}
    };

    for (int i = 0; i < 10; i++) {
        gp4.resultatCourse[i] = resultats4[i];
    }

    // === GRAND PRIX 5 : Grande-Bretagne ===
    GRANDPRIX gp5;
    strcpy(gp5.nomCircuit, "Silverstone Circuit");
    strcpy(gp5.pays, "Royaume-Uni");
    gp5.nombreTours = 52;
    gp5.date = (DATE){7, 7, 2024};
    gp5.horaire = (HEURE){16, 0};
    gp5.nombreResultats = 10;
    gp5.actif = 1;

    RESULTATCOURSE resultats5[10] = {
        {"Hamilton", "Lewis", "Royaume-Uni", 1, "1:27:15.678", 25},
        {"Norris", "Lando", "Royaume-Uni", 2, "1:27:19.432", 18},
        {"Verstappen", "Max", "Pays-Bas", 3, "1:27:22.987", 15},
        {"Russell", "George", "Royaume-Uni", 4, "1:27:29.345", 12},
        {"Leclerc", "Charles", "Monaco", 5, "1:27:33.890", 10},
        {"Sainz", "Carlos", "Espagne", 6, "1:27:39.654", 8},
        {"Perez", "Sergio", "Mexique", 7, "1:27:44.210", 6},
        {"Alonso", "Fernando", "Espagne", 8, "1:27:50.789", 4},
        {"Piastri", "Oscar", "Australie", 9, "1:27:56.321", 2},
        {"Gasly", "Pierre", "France", 10, "1:28:00.987", 1}
    };

    for (int i = 0; i < 10; i++) {
        gp5.resultatCourse[i] = resultats5[i];

    }

    GRANDPRIX grandsPrix[5] = {gp1, gp2, gp3, gp4, gp5};





    void affichageEcurie(ECURIE ecurie[], int tailleEcurie) {
        for (int i = 0; i < tailleEcurie; i++) {
            printf("nom: %-18s |pays: %-12s |points: %-3d |annee creation: %d |directeur: %-18s |actif: %d\n", ecurie[i].nom, ecurie[i].pays, ecurie[i].points, ecurie[i].anneeCreation, ecurie[i].directeur, ecurie[i].actif);
        }


    }
    //affichageEcurie(ecuries, sizeof(ecuries) / sizeof(ecuries[0]));

    void affichageGrandPrix(GRANDPRIX grandsPrix[], int tailleGrandPrix) {
        for (int j = 0; j < tailleGrandPrix; j++) {
            printf("Grand Prix %d : %s (%s)\n",
                   j + 1,
                   grandsPrix[j].nomCircuit,
                   grandsPrix[j].pays);

            for (int i = 0; i < grandsPrix[j].nombreResultats; i++) {
                printf("%-2d : %-10s %-15s %-2d points\n",
                       grandsPrix[j].resultatCourse[i].position,
                       grandsPrix[j].resultatCourse[i].prenomPilote,
                       grandsPrix[j].resultatCourse[i].nomPilote,
                       grandsPrix[j].resultatCourse[i].pointObtenus);
            }
            printf("\n");
        }
    }

   //affichageGrandPrix(grandsPrix, sizeof(grandsPrix) / sizeof(grandsPrix[0]));

    void pointPilotes(GRANDPRIX grandsprix[], int tailleGrandPrix) {
        for (int i=0; i<tailleGrandPrix;i++) {
            for (int j=0; j<grandsPrix[i].nombreResultats;j++) {
                for (int k=0; k<grandsPrix[i].nombreResultats;k++) {
                    if (strcmp(pilotes[k].nom, grandsPrix[i].resultatCourse[j].nomPilote) ==0) {
                        pilotes[k].points += grandsPrix[i].resultatCourse[j].pointObtenus;
                    }
                }
            }
        }
    }

    //pointPilotes(grandsPrix, sizeof(grandsPrix) / sizeof(grandsPrix[0]));
    affichagePilotes(pilotes, sizeof(pilotes) / sizeof(pilotes[0]));

    return 0;
}