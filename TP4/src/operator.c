/* Fichier: operator.c 
* On définit et utilise les fonctions qui effectue différentes opérations arithmétiques
* auteur: Pierre FRON 
*/


#include <stdio.h>
#include "operator.h"



int operateur(int num1, int num2, char op){ // fonction appelée par main.c
    switch (op){ // On utilise un switch pour rentrer
    case '+':
        return somme(num1,num2);
    break;
    case '-':
        return difference(num1,num2);
    break;
    case '*':
        return produit(num1,num2);
    break;
    case '/':
        return quotient(num1,num2);
    break;
    case '%':
        return modulo(num1,num2);
    break;
    case '&':
        return et(num1,num2);
    break;
    case '|':
        return ou(num1, num2);
    break;
    case '~':
            return negation(num1,num2);
    break;
    }

return (0);
}

int somme(int num1, int num2){ // on définit les fonctions
    return num1+num2;
};
int difference(int num1, int num2){
    return num1-num2;
}
int produit(int num1, int num2){
    return num1*num2;
}
int quotient(int num1, int num2){
    return num1/num2;
}
int modulo(int num1, int num2){
    return num1%num2;
}
int et(int num1, int num2){
    return num1&num2;
}
int ou(int num1, int num2){
    return num1|num2;
}
int negation(int num1, int num2){
    return ~(num1&num2);
}




