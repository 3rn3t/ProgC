/* Fichier: grand_petit.c 
* On réalise un algo de tri
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

srand(time(NULL)); //on reinitalise la graine de la génération aléatoire
int tab[100];
int i = 0;

printf("Tableau non trié:\n");
for (i=0;i<100;i++){ // boucle de génération et d'affichage du tableau non trié
    int val = rand() % 1000; // on génère entre 0 et 1000
    tab[i] = val; // on rajoute dans le tableau
    printf("%i ",val); // on affiche
};

printf("\n\n Tableau trié:\n");
int j =0;
int tamp = 0;
for(i=0;i<100;i++){ // on réalise un tri a bulle
    for(j=i+1;j<100;j++){
        if (tab[j]<tab[i]){
            tamp = tab[i];
            tab[i] = tab[j];
            tab[j] = tamp;
        };
    };
    printf("%i ", tab[i]);
};

return 0;
}