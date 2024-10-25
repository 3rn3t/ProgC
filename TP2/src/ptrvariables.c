/* Fichier: ptrvariables.c 
* On définit des variables dans plusieurs bases puis on définit un pointeur pour chacune d'elle
* Ensuite on modifie ces valeurs grâce aux pointeurs
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){

char  mychar = 'a'; // on initialise les valeurs et les pointeurs puis on les affiches 
char *mycharaddr = &mychar;
printf("Avant la manipulation \n");
printf("Adresse de mychar : %p, ", mycharaddr);
printf("Valeur de mychar : 0x%x\n", mychar);

short myshort = 12;
short *myshortaddr = &myshort;
printf("Adresse de myshort : %p, ", myshortaddr);
printf("Valeur de myshort : 0x%x\n", myshort);

int myint = -12;
int *myintaddr = &myint;
printf("Adresse de myint : %p, ", myintaddr);
printf("Valeur de myint : 0x%x\n", myint);

long int mylongint = -1234553;
long int *mylongintaddr = &mylongint;
printf("Adresse de mylongint : %p, ", mylongintaddr);
printf("Valeur de mylongint : 0x%lx\n", mylongint);

long long int mylonglongint = 112345;
long long int *mylonglongintaddr = &mylonglongint;
printf("Adresse de mylonglongint : %p, ", mylonglongintaddr);
printf("Valeur de mylonglongint : 0x%llx\n", mylonglongint);

float myfloat = 3.1488416456;
float *myfloataddr = &myfloat;
printf("Adresse de myfloat : %p, ", myfloataddr);
printf("Valeur de myfloat : 0x%x\n", myfloat);

double mydouble = 64.75;
double *mydoubleaddr = &mydouble;
printf("Adresse de mydouble : %p, ", mydoubleaddr);
printf("Valeur de mydouble : 0x%x\n", mydouble);

long double mylongdouble = 78.5;
long double *mylongdoubleaddr = &mylongdouble;
printf("Adresse de mylongdouble : %p, ", mylongdoubleaddr);  // *((long int*) &mylongdouble) a tester
printf("Valeur de mylongdouble : 0x%x\n\n", mylongdouble);



*mycharaddr = "b"; // on modifie les valeurs puis on les affiches ainsi que leur adresse
printf("Après la manipulation \n");
printf("Adresse de mychar : %p, ", mycharaddr);
printf("Valeur de mychar : 0x%x\n", mychar);

*myintaddr = 78;
printf("Adresse de myint : %p, ", myintaddr);
printf("Valeur de myint : 0x%x\n", myint);

*myshortaddr = 7;
printf("Adresse de myshort : %p, ", myshortaddr);
printf("Valeur de myshort : 0x%x\n", myshort);

*mylongintaddr = 4785;
printf("Adresse de mylongint : %p, ", mylongintaddr);
printf("Valeur de mylongint : 0x%lx\n", mylongint);

*mylonglongintaddr = 174689;
printf("Adresse de mylonglongint : %p, ", mylonglongintaddr);
printf("Valeur de mylonglongint : 0x%llx\n", mylonglongint);

*myfloataddr = 8.188;
printf("Adresse de myfloat : %p, ", myfloataddr);
printf("Valeur de myfloat : 0x%x\n", myfloat);

*mydoubleaddr = 0.1;
printf("Adresse de mydouble : %p, ", mydoubleaddr);
printf("Valeur de mydouble : 0x%lx\n", mydouble);

*mylongdoubleaddr = 122.4878;
printf("Adresse de mylongdouble : %p, ", mylongdoubleaddr);
printf("Valeur de mylongdouble : 0x%0*lx\n", sizeof(mylongdouble) , mylongdouble);


return 0;
}
