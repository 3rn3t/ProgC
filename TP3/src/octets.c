/* Fichier: octets.c 
* On affiche les différents octets en héxadecimal de plusieurs types de variables
* auteur: Pierre FRON 
*/

#include <stdio.h> 

int main(){

short myshort = 8;
char *myshortptr = (char *) &myshort; // on convertit notre adresse en char pour quelle puisse être parcourue (inspiration de ChatGPT pour cette ligne)
printf("Octets de short :\n");
for(unsigned long int i =0; i<sizeof(myshort);i++){ //on parcourt sur la taille de notre variable
    printf("%x ", myshortptr[sizeof(myshort)-i-1]); // on affiche chaque octet
};
printf("\n");
                                // on répète l'opération pour chaque type de variable
int myint = 78;
char *myintptr = (char *) &myint; 
printf("\nOctets de int :\n");
for(unsigned long int i =0; i<sizeof(myint);i++){
    printf("%x ", myintptr[sizeof(myint)-i-1]);
};
printf("\n");

long int mylongint = 7878;
char *mylongintptr = (char *) &mylongint;
printf("\nOctets de long int :\n");
for(unsigned long int i =0; i<sizeof(mylongint);i++){
    printf("%hhx ", mylongintptr[sizeof(mylongint)-i-1]);
};
printf("\n");

float myfloat = 1.248;
char *myfloatptr = (char *) &myfloat; 
printf("\nOctets de float :\n");
for(unsigned long int i =0; i<sizeof(myfloat);i++){
    printf("%hhx ", myfloatptr[sizeof(myfloat)-i-1]);
};
printf("\n");

double mydouble = 0.7894;
char *mydoubleptr = (char *) &mydouble; 
printf("\nOctets de double :\n");
for(unsigned long int i =0; i<sizeof(mydouble);i++){
    printf("%hhx ", mydoubleptr[sizeof(mydouble)-i-1]);
};
printf("\n");

long double mylongdouble = 7.484674;
char *mylongdoubleptr = (char *) &mylongdouble; 
printf("\nOctets de long double :\n");
for(unsigned long int i =0; i<sizeof(mylongdouble);i++){
    printf("%hhx ", mylongdoubleptr[sizeof(mylongdouble)-i-1]);
};
printf("\n");



return 0;
}


