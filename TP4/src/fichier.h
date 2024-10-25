/* Fichier: fichier.h
* Ce fichier permet d'éxectuer les exos 1,2 et 7
* auteur: Pierre FRON 
*/

#ifndef FICHIER_H_
#define FICHIER_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


void lire_fichier(char *); 
void ecrire_dans_fichier(char *, char *);
//void fichier(void);


#endif 
