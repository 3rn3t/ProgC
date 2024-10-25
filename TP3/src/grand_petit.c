/* Fichier: grand_petit.c 
* On cherche la plus petite et la plus grande valeur dans un tableau d'entier
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL)); //initialisation de la graine du générateur de nombres aléatoires
int tab[100];
int min = 1000;
int max = 0;
int i = 0;
for (i=0;i<100;i++){ // boucle de génération du tableau
    int val = rand() % 1000 + 1; // on génère entre 0 et 1000 (inclus)
    tab[i] = val; // on ajoute dans le tableau
}


int *ptr = &tab[0]; //on initialise le pointeur
for(i=0;i<100;i++){
    if (*ptr < min){ // on compare avec le min actuel
        min = *ptr; // on modifie ce min si c'est bon
    }
    if (*ptr > max){ // on compare avec le max actuel
        max = *ptr; // on modifie ce max si c'est bon
    }
    ptr+=1;
}

printf("Le numéro le plus petit est : %i\n", min);
printf("Le numéro le plus grand est : %i\n", max);
return 0;
}