/* Fichier: fibonacci.c 
* On calcule et affiches les n premiers termes de la suite de fibonacci
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int u0 = 0;
int u1 = 1;
int un = 0;
int n = 7;
int i = 0;

printf("%i\n", u0); //affichage des 2 premiers termes
printf("%i\n", u1);

for(i=0;i<n-2;i++){
    un = u0+u1; // on calcule le terme suivant
    printf("%i\n", un); // on l'affiche
    u0 = u1; // on effectue le décalage des termes
    u1 = un;

} 

    return 0;
}