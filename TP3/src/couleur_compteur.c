/* Fichier: couleur_compteur.c 
* On génère aléatoirement 100 couleurs que l'on stocke dans un tableau
* On compte ensuite le nombre d'apparition de chaque couleur dans le tableau
* auteur: Pierre FRON 
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct couleur{ //on définit la structure couleur
int r;
int g;
int b;
int a;
};

struct compt_couleur{ //on définit la structure de comptage des couleurs
    struct couleur couleur;
    int compt;
};


int main(){

srand(time(NULL));

struct couleur couleurs[100]; //on crée le tableau de couleur
for (int i=0; i<98; i++){
    couleurs[i].r = rand() % 256;
    couleurs[i].g = rand() % 256;
    couleurs[i].b = rand() % 256;
    couleurs[i].a = rand() % 256;
}

couleurs[98].r = 11; //on crée deux valeurs similaires "artificiellement"
couleurs[98].g = 11;
couleurs[98].b = 11;
couleurs[98].a = 11;

couleurs[99].r = 11;
couleurs[99].g = 11;
couleurs[99].b = 11;
couleurs[99].a = 11;

 
printf("Tableau des couleurs :\n"); //affichage du tableau de couleurs
for (int i=0; i < 100; i++) {
    printf("%hhx %hhx %hhx %hhx\n", couleurs[i].r, couleurs[i].g, couleurs[i].b, couleurs[i].a);
    
}

struct compt_couleur compt_couleurs[100];   //on crée le tableau de comptage

for (int i=0; i<100; i++){ //on parcourt le tableau de couleurs
    compt_couleurs[i].compt = 0; //on initalise le compteur à 0
    for (int j=0; j<100; j++){ // on parcourt le tableau de comptage
                                // si la couleur est deja dans le tableau de comptage 
        if(compt_couleurs[j].couleur.r == couleurs[i].r && compt_couleurs[j].couleur.g == couleurs[i].g && compt_couleurs[j].couleur.b == couleurs[i].b && compt_couleurs[j].couleur.a == couleurs[i].a){
            compt_couleurs[j].compt ++; //on incrémente son compteur sans rien ajouter dans la tableau de comptage
            break;
        } else if (j == 99){ //
            compt_couleurs[i].couleur.r = couleurs[i].r; //on définit la couleur du tableau de comptage identique à celle du tableau de couleur
            compt_couleurs[i].couleur.g = couleurs[i].g;
            compt_couleurs[i].couleur.b = couleurs[i].b;
            compt_couleurs[i].couleur.a = couleurs[i].a;
            compt_couleurs[i].compt ++; //on incrémente son compteur
        }
    }
}

printf("Tableau des couleurs :\n"); //affichage du tableau de couleurs compté
for (int i=0; i < 100; i++) {
    if (compt_couleurs[i].compt == 0){ // permet de retirer une ligne vide dans le cas d'un doublon de couleur
        break;
    }
    printf("%hhx %hhx %hhx %hhx : %i\n", compt_couleurs[i].couleur.r, compt_couleurs[i].couleur.g, compt_couleurs[i].couleur.b, compt_couleurs[i].couleur.a, compt_couleurs[i].compt);
}
return 0;
}

