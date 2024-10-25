/* Fichier: chercher.c 
* On génère un tableau d'entier puis on cherche un valeur dans ce tableau
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
int tab[100];
int i = 0;
int lookfor;

printf("\nTableau : \n");
for(i=0;i<100;i++){ // on génère notre tableau et on l'affiche
    tab[i] = rand() % 1000;
    printf("%i ",tab[i]);
};
printf("\n\n Entrez l'entier que vous souhaitez chercher : ");
scanf("%d", &lookfor); // on demande à l'utilisateur de saisir sa valeur

for (i=0;i<100;i++){ // on vérifie pour les 100 valeurs du tableau
    if (tab[i] == lookfor){ //s'il y a correspondance,
        printf("Résulat : entier présent\n\n"); // on affiche qu'il est présent
        break;  // on break
    };
    if (i == 99){ // sinon on affiche qu'il est absent
        printf("Résulat : entier absent\n\n");
    }
};


return 0;
}