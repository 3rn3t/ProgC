/* Fichier: repertoire.c 
* On affiche les fichiers présents dans un répertoire saisi en ligne de commande
* auteur: Pierre FRON 
*/
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "repertoire.h"



int main(int argc, char *argv[]) { 
    if (argc != 2) { // au cas où la commande serait mal saisie
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    char *nom_repertoire = argv[1];
    lire_dossier(nom_repertoire);
    lire_dossier_recursif(nom_repertoire);
    //lire_dossier_iteratif(nom_repertoire);

    return 0;
}

int lire_dossier(char *nom_dossier){ //fonction de lecture de repertoire
    DIR *dirp = opendir(nom_dossier);
    if (dirp == NULL) {
        perror("opendir");
    return EXIT_FAILURE;
    }
    struct dirent * ent;
    while(1)  {
        ent = readdir(dirp);
        if (ent == NULL) {
            break;  }
            printf("%s\n", ent->d_name);
            }
            closedir(dirp);
    return 0;
}

int lire_dossier_recursif(char *nom_dossier){ // fonction de lecture de repertoire récursive
        DIR *dirp = opendir(nom_dossier);
    if (dirp == NULL) { // premier test à effectuer car si dirp == NULL alors d_type n'exise pas erreur à £
        perror("opendir");
    return EXIT_FAILURE;
    }
    struct dirent * ent;
    while(1)  {
        ent = readdir(dirp);
         if (ent == NULL) { // si on atteint le bout, on break
            break;
        } 
        if ((strcmp(ent->d_name,"..") == 0)|(strcmp(ent->d_name,".") == 0)){ // si on atteint "." le folder lui même ou ".." le folder parent, on skip
            ent = readdir(dirp); 
        } else if (ent->d_type == DT_DIR){ //£, si le d_type est un folder
            printf("%s\n", ent->d_name);
            char tamp[100];
            strcpy(tamp,nom_dossier);
            strcat(tamp,"/");
            strcat(tamp,ent->d_name); // on contacatène pour avoir le path
            printf("%s\n",tamp); // affichage du path
            lire_dossier_recursif(tamp); // récursion
        } else {
            printf("%s\n", ent->d_name); // sinon on affiche
        }
        }
        closedir(dirp);
    return 0;
}


int lire_dossier_iteratif(char *nom_dossier){

    return 0;
}


