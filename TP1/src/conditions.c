/* Fichier: conditions.c 
*
* Parcout les nombres de 1 à 1000
* Si le nombre est un multiple de 5 ou 7, on l'ajoute à une variable somme
* Si le nombre est un multiple de 11, on passe au nombre suivant
* Quand la somme dépasse 5000, on arrête et on affiche la somme
*
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int i = 1;
int somme = 0;
for(i=1;i<=1000;i++){
    if (somme>5000){ // la somme dépasse 5000
        break;
    } else if (i%11 == 0){ // cas  i est multiple de 11 
        continue;
    } else if (i%5==0 || i%7==0){ // cas  i est multiple de 5 ou 7
        somme+=i;
    }

}
printf("somme : %i\n", somme);
return 0;
}