
#include "classement.h"
#include "ecurie.h"
#include "pilote.h"
#include "grandprix.h"
#include "initialisation.h"

// Exemple d'initialisation dans main.c ou initialisation.c
void initialiserDonneesTest() {
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

    // Initialisation d'un Grand Prix avec résultats
    GRANDPRIX gp1;
    strcpy(gp1.nomCircuit, "Circuit de Monaco");
    strcpy(gp1.pays, "Monaco");
    gp1.nombreTours = 78;
    gp1.date = (DATE){26, 5, 2024};
    gp1.horaire = (HEURE){15, 0};
    gp1.nombreResultats = 10;
    gp1.actif = 1;

    // Résultats du Grand Prix (exemple pour les 10 premières positions)
    RESULTATCOURSE resultats[10] = {
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

    // Copie des résultats dans la structure GrandPrix
    /*
    for (int i = 0; i < 10; i++) {
        gp1.resultats[i] = resultats[i];
    }
*/
    // TODO: Répéter pour les autres Grands Prix...
}
