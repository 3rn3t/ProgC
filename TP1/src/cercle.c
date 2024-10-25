/* Fichier: cercle.c 
* calcul le périmètre et l'aire du cercle puis affiche les valeurs
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <math.h>

int main(){
float rayon = 4;
float aire = M_PI*rayon*rayon;
float périmètre = 2*M_PI*rayon;
printf("%f\n",aire);
printf("%f\n",périmètre);
return 0;
}