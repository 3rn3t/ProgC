/* Fichier: etudiant.c 
* On définit puis affiche 5 tableaux regroupant les informations de 5 étudiants
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main(){ // on définit nos tableaux
char nom[5][20]={"Dubois","Dupont","Dupond","Meunier","Loëac"};
char prenom[5][20] = {"John","Bob","Atchoum","James","Paul"};
char adresse[5][100] = {"12 Rue de l'Arche, 75002 Paris","57 Avenue de Verdun,13001 Marseille","284 Cours Vuitton, 69002 Lyon","3 Place de la Poste, 69420 Ampuis","10 Allée des Maronniers, 92340 Bourg-la-Reine"};
float notesProgC[5] = {15,18,16,5,9};
float notesOS[5] = {7,12,8,9,17};
int i =0;

for (i=0;i<5;i++){ // on affiche nos valeurs
    printf("%s", nom[i]);
    printf(" %s", prenom[i]);
    printf(", %s", adresse[i]);
    printf(", note en ProgC : %f", notesProgC[i]);
    printf(", note en OS : %f\n", notesOS[i]);
}

}