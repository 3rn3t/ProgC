/* Fichier: bits.c 
* on vérifie le 4ème et le 20ème bit d'un entier
* s'ils sont à 1, on affiche 1
* sinon, on affiche 0
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int d = 1000000;
int quatre = 0;
int vingt = 0;
quatre = d&0b1000; //ET bit à bit avec des masques
vingt = d&0b10000000000000000000; //ET bit à bit avec des masques

if(quatre && vingt){ //on vérifie notre condition
    printf("1 \n");
} else{
    printf("0 \n");
}
    return 0;
}