/* Fichier: fichier.c 
* Ce fichier permet d'éxectuer les exos 1,2 et 7
* auteur: Pierre FRON 
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "fichier.h"


/* Partie de Jo
    char *nom_de_fichier = "text.txt";
    lire_fichier(nom_de_fichier);
    printf("\n");

    char message[] = "Hello World \n";

    ecrire_dans_fichier(nom_de_fichier, message);

    lire_fichier(nom_de_fichier);
    return 0; 



void lire_fichier(char *nom_de_fichier){
    char content[1000]; //c'est le nombre de char par ligne possible, on espere que ca va pas depasser
    int fd, count, size;
    fd = open(nom_de_fichier, O_RDONLY);
    size = read(fd, content, 1000);
    for (count = 0; count < size; count ++) {
    printf("%c", content[count]); 
    }
    close(fd);
};

void ecrire_dans_fichier(char *nom_de_fichier, char *message){
    int fd, count, size;
    fd = open(nom_de_fichier, O_CREAT|O_WRONLY|O_APPEND, S_IRUSR|S_IWUSR); 
    size = write(fd, message, strlen(message));
    close(fd);
};

*/

void fichier(){
int choice;
char nom_de_fichier;
char message[1000];

printf("Que souhaitez-vous faire ? \n 1. Lire un fichier \n 2. Écrire dans un fichier\n Votre choix :"); 
scanf("%i",&choice);
    

switch(choice){
    case 1 :
        printf("Entrez le nom du fichier à lire : \n "); 
        scanf(" %p",&nom_de_fichier);
        printf("%c\n", nom_de_fichier);
        lire_fichier(nom_de_fichier);
    break;
    case 2:
        ecrire_dans_fichier(nom_de_fichier, message);
    break;
}
}

void lire_fichier(char nom_de_fichier){
    char message[1000];
    int file,taille;
    file = open(nom_de_fichier, O_RDONLY);
    taille = read(file, message, 1000);
    printf("Contenu du fichier : \n");
    for (int count = 0; count < taille; count ++){
        printf("1");
        printf("%c", message[count]); 
    } 
    close(file);
}

void ecrire_dans_fichier(char *nom_de_fichier, char *message){

}


