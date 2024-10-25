/* Fichier: recherche_dichotomique.c 
* On génère un tableau de 100 entier qu'on trie par ordre croissant
* On effectue ensuite une recherche dichotomique dans ce tableau afin de trouver une valeur saisie par l'utilisateur
* Si l'entier est présent dans le tableau, on affiche 'entier présent'. Sinon, 'entier absent'.
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h> // a continuer

int main(){

srand(time(NULL)); //on reinitalise la graine de la génération aléatoire
int tab[100];
int i = 0;

for (i=0;i<100;i++){ // boucle de génération et d'affichage du tableau non trié
    int val = rand() % 1000; // on génère entre 0 et 1000
    tab[i] = val; // on rajoute dans le tableau
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

int lookfor; // on demande à l'utilisateur de saisir sa valeur
printf("\n\n Entrez l'entier que vous souhaitez chercher : ");
scanf("%d",&lookfor);

int mid = 50; // on définit le point de recherche
int cnt = 0;
int inter = mid; // on définit l'intervalle de décalage
while (1){ // on boucle tant qu'on n'a pas soit un résultat positif soit négatif
    inter = inter/2 + inter%2; // on divise l'intervalle de recherche par deux à chaque tour
    if (tab[mid] == lookfor){ // si on a atteint la bonne valeur, on affiche un résultat positif et on break
        printf("Résultat : entier présent \n");
        break;
    } else if(tab[mid] < lookfor){ // Si on est en dessous de la valeur recherché, on rajoute au point de recherche l'intervalle de décalage
        mid  += inter ;
    } else if(tab[mid] > lookfor){  // Si on est au dessus de la valeur recherché, on enlève au point de recherche l'intervalle de décalage
        mid -= inter;
        if (mid<=-1){ // cela permet de ne jamais sortir de l'intervalle de recherche
            mid = -mid;
        }
    }
    if ((inter == 1) | (mid == 99)){ //si on atteint la borne min ou max, on incrémente cnt de 1
        cnt +=1; 
        if (cnt == 2){ // si on passe deux tour avec l'intervalle à 1 ou que la borne max est atteinte, on break et on affiche un retour négatif
            printf("Résultat : entier absent \n");
            break;
        }
    }
};

return 0;
}