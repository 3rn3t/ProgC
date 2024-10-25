/* Fichier: chaine.c 
* On compte le nombre de caractères dans une chaine
* On copie/concatène des chaines de caractères
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
char mot1[10] = "Hello";
char mot2[10] = " World!";
char tamp[100] = "";
int i = 0;

int comptage(char mot[10]){ // fonction comptage
int val = 0;
for(i=0;mot[i]!='\0';i++){ 
    val+=1; // on compte le nombre de caractères dans une chaine
}
return val;
}

int copie(char mot[10], char rtrn[100]){ // fonction copie/concaténation
int n = 0;
n = comptage(rtrn); // on détermine à partir de quel indice le tampon est vide
for(i=0;mot[i]!='\0';i++){ 
rtrn[i+n] = mot[i]; // on copie notre première chaine de charactère dans la chaine "tampon"
}
return 0;
}

copie(mot1,tamp);
copie(mot2,tamp);
printf("%s\n",tamp);

return 0;
}