//
// Created by Adou on 26/10/2025.
//
#ifndef PILOTE_H
#define PILOTE_H
#include "ecurie.h"
#include "grandprix.h"


typedef struct {
    char nom[50];
    char prenom[50];
    char nationalite[50];
    char ecurie[50];
    int points;
    int numero;
    int age;
    int actif;
}PILOTE;
void pointPilotes(GRANDPRIX grandsPrix[], int tailleGrandPrix, PILOTE pilotes[], int nbPilotes);
void affichagePilotes(PILOTE pilote[], int taillePilote);


#endif //PILOTE_H