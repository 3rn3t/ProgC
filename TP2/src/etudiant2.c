/* Fichier: etudiant2.c 
* On définit puis affiche un tableau de structure regroupant les informations de 5 étudiants
* auteur: Pierre FRON 
*/

#include <stdio.h>
#include <string.h>


int main(){



struct etudiant{
char nom[30];
char prenom[30];
struct adresse{
int numéro;
char rue[30];
int codePostal;
char ville[30];
} adresse;
float noteProgC;
float noteOS;
};

struct etudiant etudiant_cpe[5]; //initialisation des données

strcpy(etudiant_cpe[0].nom, "Dubois");
strcpy(etudiant_cpe[0].prenom, "John");
etudiant_cpe[0].adresse.numéro = 12;
strcpy(etudiant_cpe[0].adresse.rue, "Rue de l'Arche");
etudiant_cpe[0].adresse.codePostal = 75002;
strcpy(etudiant_cpe[0].adresse.ville, "Paris");
etudiant_cpe[0].noteProgC = 15;
etudiant_cpe[0].noteOS = 7;

strcpy(etudiant_cpe[1].nom, "Dupont");
strcpy(etudiant_cpe[1].prenom, "Bob");
etudiant_cpe[1].adresse.numéro = 57;
strcpy(etudiant_cpe[1].adresse.rue, "Avenue de Verdun");
etudiant_cpe[1].adresse.codePostal = 13001;
strcpy(etudiant_cpe[1].adresse.ville, "Marseille");
etudiant_cpe[1].noteProgC = 18;
etudiant_cpe[1].noteOS = 12;

strcpy(etudiant_cpe[2].nom, "Dupond");
strcpy(etudiant_cpe[2].prenom, "Atchoum");
etudiant_cpe[2].adresse.numéro = 284;
strcpy(etudiant_cpe[2].adresse.rue, "Cours Vuitton");
etudiant_cpe[2].adresse.codePostal = 69002;
strcpy(etudiant_cpe[2].adresse.ville, "Lyon");
etudiant_cpe[2].noteProgC = 16;
etudiant_cpe[2].noteOS = 8;

strcpy(etudiant_cpe[3].nom, "Meunier");
strcpy(etudiant_cpe[3].prenom, "James");
etudiant_cpe[3].adresse.numéro = 3;
strcpy(etudiant_cpe[3].adresse.rue, "Place de la Poste");
etudiant_cpe[3].adresse.codePostal = 69420;
strcpy(etudiant_cpe[3].adresse.ville, "Ampuis");
etudiant_cpe[3].noteProgC = 5;
etudiant_cpe[3].noteOS = 9;

strcpy(etudiant_cpe[4].nom, "Loëac");
strcpy(etudiant_cpe[4].prenom, "Paul");
etudiant_cpe[4].adresse.numéro = 10;
strcpy(etudiant_cpe[4].adresse.rue, "Allée des Maronniers");
etudiant_cpe[4].adresse.codePostal = 92340;
strcpy(etudiant_cpe[4].adresse.ville, "Bourg-la-Reine");
etudiant_cpe[4].noteProgC = 9;
etudiant_cpe[4].noteOS = 17;




int i = 0; // affichage des données
for(i=0;i<5;i++){
printf("Étudiant.e %i :\n", i+1);
printf("Nom : %s\n",etudiant_cpe[i].nom);
printf("Prénom : %s\n",etudiant_cpe[i].prenom);
printf("Adresse : %i ,",etudiant_cpe[i].adresse.numéro);
printf("%s, ",etudiant_cpe[i].adresse.rue);
printf("%i, ",etudiant_cpe[i].adresse.codePostal);
printf("%s\n",etudiant_cpe[i].adresse.ville);
printf("Notes ProgC : %f\n",etudiant_cpe[i].noteProgC);
printf("Notes OS : %f \n\n",etudiant_cpe[i].noteOS);

}



return 0;
}