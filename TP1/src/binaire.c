/* Fichier: binaires.c 
* On affiche la décomposition en binaire d'un int
* On suit ici un algorithme vu en spé math au lycée
*
* auteur: Pierre FRON 
*/

#include <stdio.h>


int main(){ 
int cnt = 0; 
int nb = 65535;
long long int bin = 0; //la taille est nécessaire pour pouvoir gérer tous les int
int i = 1;

printf("nb au début : %i\n", nb);

for(cnt=0;(nb != 0);cnt++){ //on tourne tant que nb vaut pas 0 
    long long int power = 1;
    for(i=0; i<cnt; i++){ // calcul de la 10^cste
        power *= 10;
    }
    if(nb%2 == 1){  // si le reste de la division euclidienne vaut 1
        nb -=1; // on soustrait 1 à nb pour pourvoir continuer
        bin += power; // on rajouter 10^cste au nombre binaire
    }
    nb /= 2; // on effectue la division de nb par 2 puis on retourne dans la boucle
    printf("cnt : %i\n", cnt);
    printf("nb : %i\n", nb);
    printf("bin : %lli\n", bin);
    


}
printf("cnt final : %i\n", cnt);
printf("nb final : %i\n", nb);
printf("bin final :%lli\n", bin);
return 0;


}
