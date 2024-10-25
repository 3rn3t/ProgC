/* Fichier: puissance.c 
* On calcule des puissances sans utiliser la fonction pow() de <math.h>
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int a = 2;
int b = 3;
int result = 1;
int i = 0;

for (i=0;i<b;i++){ //on tourne le nb de fois qui équivaut à la puissance
    result *= a;
}
printf("Le résultat est : %i\n", result);
    return 0;
}