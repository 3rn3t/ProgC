/* Fichier: variables.c 
* affiche les valeurs de variables dans tous types de base (signé ou non)
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
char  mychar = 'a';
printf("mychar: %c\n", mychar);
unsigned char myunsichar = 234;
printf("myunsichar :%hhu\n", myunsichar);
short myshort = -12;
printf("myshort: %hd\n", myshort);
unsigned short myunsishort = 'a';
printf("myunsishort: %hu\n", myunsishort);
int myint = 12;
printf("myint: %i\n", myint);
unsigned int myunsiint = 3456;
printf("myunsiint: %u\n",myunsiint);
long int mylongint = -1234553L;
printf("mylongint: %ld\n",mylongint);
unsigned long int myunsilongint = 234556UL;
printf("myunsilongint: %lu\n",myunsilongint);
long long int mylonglongint = 112345LL;
printf("mylonglongint: %lld\n",mylonglongint);
unsigned long long int myunsilonglongint = 1234567ULL;
printf("myunsilonglongint: %llu\n", myunsilonglongint);

return 0;
}