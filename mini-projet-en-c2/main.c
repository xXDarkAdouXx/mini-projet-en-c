#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "classement.h"
#include "ecurie.h"
#include "pilote.h"
#include "grandprix.h"
#include "initialisation.h"

//commandes pilotes
//affichagePilotes(pilotes, sizeof(pilotes) / sizeof(pilotes[0]));

int main(void) {
    // Récupération des données
    int nbEcuries, nbPilotes, nbGP;

    ECURIE *ecuries = initEcuries(&nbEcuries);
    PILOTE *pilotes = initPilotes(&nbPilotes);
    GRANDPRIX *grandsPrix = initGrandsPrix(&nbGP);

    pointPilotes(grandsPrix, nbGP, pilotes, sizeof(pilotes) / sizeof(pilotes[0]));
    // === Debug ===
    //ajouterGrandPrixAutomatique(grandsPrix, &nbGP);
    //affichagePilotes(pilotes, sizeof(pilotes) / sizeof(pilotes[0]));
    //ajoutEcurie(ecuries, sizeof(ecuries) / sizeof(ecuries[0]));
    //affichageEcurie(ecuries, nbEcuries);
    //affichageGrandPrix(grandsPrix, nbGP);
    pointPilotes(grandsPrix, nbGP, pilotes, nbPilotes);

    //Partie dédiée à l'affichage de l'interface utilisateur
    char *menuPrincipal[5] = {"Gestion des Pilotes", "Gestion des Ecuries", "Gestion des Grands Prix", "Affichage Données", "Quitter"};
    char *menuGestionPil[4] = {"Ajouter un Pilote", "Mettre à jour les points des pilotes", "Supprimer un pilote", "Afficher la liste des pilotes"};
    char *menuGestionEcu[4] = {"Ajouter une Ecurie", "Mettre à jour les points des ecuries", "Supprimer une Ecurie", "Afficher la liste des Ecuries"};
    char *menuGestionGP[4] = {"Ajouter un Grand Prix", "Mettre à jour les points des GP", "Supprimer un GP", "Afficher la liste des GP"};
    //char *menuAffClass[4] = {"", "Mettre à jour les points des pilotes", "Supprimer un pilote", "Afficher la liste des pilotes"};


    //Main switch

    int choice;
    //utilisation du do pour pouvoir utiliser plusieurs fonctions dans la même instance, et ne pas avoir à le relancer et réentrer les données à chaque fois
    do {
        //aff principal
        for (int i = 0; i < 5; i++) {
            printf("[%d] %s \n", i + 1, menuPrincipal[i]);
        }
        printf("A quel menu voulez-vous accéder ? ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                for (int i = 0; i < 4; i++) {
                    printf("[%d] %s \n", i + 1, menuGestionPil[i]);
                }
                printf("Que voulez vous modifier dans les pilotes ? ");
                scanf("%d",&choice);
                switch (choice) {
                    case 1:
                        printf("Retour au menu principal... \n");
                        break;
                    case 2:
                        pointPilotes(grandsPrix, nbGP, pilotes, nbPilotes);
                        printf("Points des pilotes calculés... \n");
                        printf("Retour au menu principal... \n");
                        break;
                    case 3:
                        printf("Retour au menu principal... \n");
                        break;
                    case 4:
                        pointPilotes(grandsPrix, nbGP, pilotes, nbPilotes);
                        affichagePilotes(pilotes, nbPilotes);
                        printf("Retour au menu principal... \n");
                        break;
                }
                break;
            case 2:
                for (int i = 0; i < 4; i++) {
                    printf("[%d] %s \n", i + 1, menuGestionEcu[i]);
                }
                printf("Retour au menu principal... \n");
                break;
            case 3:
                for (int i = 0; i < 4; i++) {
                    printf("[%d] %s \n", i + 1, menuGestionGP[i]);
                }
                printf("Retour au menu principal... \n");
                break;
            case 4:
                printf("Not implemented yet!");
                break;
            case 5:
                printf("Au revoir !");
                break;
        }
    }while (choice != 5);
    free(ecuries);
    free(pilotes);
    return 0;
}