/* Fichier: tableauptr.c 
* On définit deux tableaux dans lequels on génère des valeurs aléatoires
* Si l'indice de ces valeurs est divisible par 2, on multiplie la valeur par 3
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL)); //initialisation de la graine du générateur de nombres aléatoires
int tabint[10];
float tabfloat[10];
int *ptrint = &tabint[0];
float *ptrfloat = &tabfloat[0];
int i = 0;

printf("\nTableau d'entiers (avant la multiplication par 3) :\n'''\n");
for (i=0;i<10;i++){ // boucle de génération et d'affichage du tableau des int
    int intval = rand() % 100; // on génère entre 0 et 100
    tabint[i] = intval; // on rajoute dans le tableau
    printf("%i, ",tabint[i]); // on affiche
};

printf("\n'''\n\n Tableau de float (avant la multiplication par 3) :\n'''\n");
for (i=0;i<10;i++){ // boucle de génération et d'affichage du tableau des flaot
    float floatval = rand() / (float) RAND_MAX; // on génère entre 0 et 1
    tabfloat[i] = floatval; // on ajoute dans le tableau
    printf("%f, ", tabfloat[i]); // on affiche
};

printf("\n'''\n\nTableau d'entiers (après la multiplication par 3) :\n'''\n");
for(i=0;i<10;i++){ // boucle de calcul des int
    if (i % 2 == 0){    // on vérifie la condition de l'indice
        *ptrint *= 3;   // on multiplie la valeur associée au pointeur par 3
    } 
    printf("%i, ",tabint[i]); // on affiche
    ptrint +=1; // on passe à la valeur suivante
};

printf("\n'''\n\n Tableau de float (après la multiplication par 3) :\n'''\n");
for(i=0;i<10;i++){ // boucle de calcul des float
    if (i % 2 == 0){    // on vérifie la condition de l'indice
        *ptrfloat *= 3;  // on multiplie la valeur associée au pointeur par 3
    } 
    printf("%f, ", tabfloat[i]); // on affiche
    ptrfloat +=1;   //on passe à la valeur suivante
};
printf("\n'''\n\n");

return 0;
}