//
// Created by Adou on 26/10/2025.
//

#ifndef GRANDPRIX_H
#define GRANDPRIX_H

typedef struct {
    int jour;
    int mois;
    int annee;

}DATE;

typedef struct {
    int heure;
    int minute;
}HEURE;

typedef struct {
    char nomPilote[50];
    char prenomPilote[50];
    char nationalite[50];
    int position;
    char tempsRealise[20];
    int pointObtenus;
}RESULTATCOURSE;

typedef struct {
    char nomCircuit[50];
    char pays[50];
    int nombreTours;
    DATE date;
    HEURE horaire;
    RESULTATCOURSE resultatCourse[20];
    int nombreResultats;
    int actif;
}GRANDPRIX;

RESULTATCOURSE saisirResultat();
//GRANDPRIX saisirGrandPrix();
void saisirGrandPrix(GRANDPRIX **grandprix, int *nbGP);
void affichageGrandPrix(GRANDPRIX grandsPrix[], int tailleGrandPrix);
#endif //GRANDPRIX_H