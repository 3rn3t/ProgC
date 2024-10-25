/* Fichier: opérateurs.c 
* calcule et affiche le résultat de différentes opérations arithmétiques et logiques
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int a = 16;
int b = 3;
printf("addition: %i\n", a+b);
printf("soustraction : %i\n", a-b);
printf("multiplication : %i\n", a*b);
printf("divisition : %i\n", a/b);
printf("a modulo b: %i\n", a%b);
printf("égalité ? : %i\n", a==b);
printf("a > b ?: %i\n", a>b);

return 0;
}