/* Fichier: pyramides.c 
* affiche une pyramide de la taille voulue comme celle ci-dessous
*
*     1
*    121
*   12321
*
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){

int n = 5;
int i = 1;
int j = 1;

for(i=1;i<n+1;i++){ // on parcourt ligne par ligne
    for(j=1;j<n-i+1;j++){ // s'occupe des insertions des espaces dans une boucle à part
        printf(" ");
    }
    for(j=1;j<=(2*i)-1;j++){ // on parcourt colonne par colonne
        if(j<=i){ // cas de la partie croissance d'une ligne de la pyramide
            printf("%i",j);
        } else if(j>i){ // cas de la partie décroissance d'une ligne de la pyramide
            printf("%i",2*i-j);
        }
        
    }
    printf("\n");

}
printf("La génération de la pyramide est terminée\n");

return 0;
}
