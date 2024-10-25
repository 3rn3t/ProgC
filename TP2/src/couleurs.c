/* Fichier: couleurs.c 
* On définit puis affiche un tableau de structure regroupant 10 couleurs en RGB
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){

struct couleur{
int rouge;
int vert;
int bleu;
int alpha;
};

struct couleur couleurs[10]; // on déclare le tableau et les couleurs3


couleurs[0].rouge = 0x2e;
couleurs[0].vert = 0x20;
couleurs[0].bleu = 0x10;
couleurs[0].alpha = 0x88;

couleurs[1].rouge = 0x11;
couleurs[1].vert = 0x6d;
couleurs[1].bleu = 0x0c;
couleurs[1].alpha = 0x27;

couleurs[2].rouge = 0x3f;
couleurs[2].vert = 0x39;
couleurs[2].bleu = 0x99;
couleurs[2].alpha = 0x1b;

couleurs[3].rouge = 0x95;
couleurs[3].vert = 0x49;
couleurs[3].bleu = 0x38;
couleurs[3].alpha = 0xbb;

couleurs[4].rouge = 0xa0;
couleurs[4].vert = 0xc7;
couleurs[4].bleu = 0xc3;
couleurs[4].alpha = 0x3b;

couleurs[5].rouge = 0x8e;
couleurs[5].vert = 0xd5;
couleurs[5].bleu = 0xb5;
couleurs[5].alpha = 0x16;

couleurs[6].rouge = 0x7b;
couleurs[6].vert = 0xc5;
couleurs[6].bleu = 0x52;
couleurs[6].alpha = 0x24;

couleurs[7].rouge = 0x0b;
couleurs[7].vert = 0xab;
couleurs[7].bleu = 0x77;
couleurs[7].alpha = 0x23;

couleurs[8].rouge = 0xee;
couleurs[8].vert = 0x5b;
couleurs[8].bleu = 0xf0;
couleurs[8].alpha = 0x9a;

couleurs[9].rouge = 0xbc;
couleurs[9].vert = 0xb0;
couleurs[9].bleu = 0x0c;
couleurs[9].alpha = 0x7f;

int i = 0;
for(i=0;i<10;i++){ // on affiche tout
printf("Couleur %i :\n", i+1);
printf("Rouge : %d\n",couleurs[i].rouge); // bien penser au %d pour convertir en décimal
printf("Vert : %d\n",couleurs[i].vert);
printf("Bleu : %d\n",couleurs[i].bleu);
printf("Alpha : %d\n\n",couleurs[i].alpha);
}


return 0;
}

