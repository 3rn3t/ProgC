/* Fichier: boucles.c 
* affiche une pyramide de la taille voulue comme celle ci-dessous
*
*   *
*   **
*   *#*
*   *##*
*   *****
*
* auteur: Pierre FRON 
*/


#include <stdio.h>

int main(){
int compteur = 5;
int a=1,b=1;
for(a = 1; a<=compteur; a++){   //on parcourt ligne par ligne
    for(b=1; b<=a; b++){    // on parcourt colonne par colonne
        if (b == 1) {   //cas de la 1ère colonne
            if (a==1){  //retour à la ligne pour la 1ère ligne
                printf("%c\n",'*');
            }else{
                printf("%c",'*'); //cas générique des bordures
            }
        } else if(a==b){    //retour à la ligne pour les autres ligne
            printf("%c\n",'*');
        } else if(a==compteur){ //dernière ligne/colonne
            printf("%c", '*');
        }else{
            printf("%c",'#');   //remplissage de l'intérieur
        }
        
    }
}

/* Le fonctionnement avec les boucles while est similaire.
* A la seule différence qu'on réinitialise d à 1 à chaque tour de la boucle "c"
*/

int c=1; 
while(c<=compteur){ 
    int d=1;
    while(d<=c){
        if (d == 1) {
            if (c==1){
                printf("%c\n",'*');
            }else{
                printf("%c",'*');
            }
        } else if(c==d){
            printf("%c\n",'*');
        } else if(c==compteur){
            printf("%c", '*');
        }else{
            printf("%c",'#');
        }
        d++;
    }
    c++;
}
return 0;
}