/* Fichier: calculs.c 
* calcule et affiche le résultat de l'opération arithmétique ou logique
* entre num1 et num2 selon op
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){
int num1 = 1;
int num2 = 2;
char op = '~';

switch(op){ //on définit tout les différents case
    case '+' :
    printf("num1+num2 =:%i\n", num1+num2);
    break;
    case '-' : 
    printf("num1-num2 =:%i\n", num1-num2);
    break;
    case '*' : 
    printf("num1*num2 =:%i\n", num1*num2);
    break;
    case '/' : 
    printf("num1/num2 =:%i\n", num1/num2);
    break;
    case '%' :
    printf("num1 modulo num2 =:%i\n", num1%num2);
    break;
    case '&' :
    printf("num1 et num2 =:%i\n", num1&num2);
    break;
    case '|' :
    printf("num1 ou num2 =:%i\n", num1|num2);
    break;
    case '~' : 
    printf("num1 negation =:%i\n", ~num1);
    break;
}
return 0;
}
