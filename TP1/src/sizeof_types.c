/* Fichier: sizesof_types.c 
* affiche la taille de tous les types de variables (signés ou non) 
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
printf("sizeof(char): %lu\n", sizeof (char));
printf("sizeof(unsigned char): %lu\n", sizeof (unsigned char));
printf("sizeof(short): %lu\n", sizeof (short));
printf("sizeof(unsigned short): %lu\n", sizeof (unsigned short));
printf("sizeof(int): %lu\n", sizeof (int));
printf("sizeof(unsigned int): %lu\n", sizeof (unsigned int));
printf("sizeof(long int): %lu\n", sizeof (long int));
printf("sizeof(unsigned long int): %lu\n", sizeof (unsigned long int));
printf("sizeof(long long int): %lu\n", sizeof (long long int));
printf("sizeof(unsigned long long int): %lu\n", sizeof (unsigned long long int));
printf("sizeof(float): %lu\n", sizeof (float));
printf("sizeof(double): %lu\n", sizeof (double));
printf("sizeof(long double): %lu\n", sizeof (long double));

return 0;
}