/* Fichier: main.c 
* Ce fichier permet d'éxectuer les exos 1,2 et 7
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include "operator.h"
#include "fichier.h"

int main(){






int exo;
printf("Entrez le numéro de l'exo :\n");
scanf("%i",&exo);

switch(exo){ // on utilise un switch pour rentrer dans les différents cas
case 1:
    int num1, num2;
    char op;

    printf("Entrez num1 :\n"); // l'utilisateur saisi 2 entiers et un opérateur
    scanf("%i",&num1);

    printf("Entrez num2 :\n");
    scanf("%i",&num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) :\n");
    scanf(" %c",&op); // l'espace est important et il ne faut pas mettre \n

    printf("Résultat : %i\n",operateur(num1,num2,op)); // on appelle operateur qui est dans operator.c


break;
case 2:
    fichier();
break;

case 7:

break;


}

return 0;
}
