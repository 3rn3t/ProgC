/* Fichier: chercher2.c 
* On définit un tableau de 10 phrases, puis on cherche si un phrase donnée est présente dans le tableau.
* auteur: Pierre FRON 
*/

#include <stdio.h>

int main() {
char tab[10][100] = { // on definit notre tableau
 "Bonjour, comment ça va ?",
 "Le temps est magnifique aujourd'hui.",
 "C'est une belle journée.",
 "La programmation en C est amusante.",
 "Les tableaux en C sont puissants.",
 "Les pointeurs en C peuvent être déroutants.",
 "Il fait beau dehors.",
 "La recherche dans un tableau est intéressante.",
 "Les structures de données sont importantes.",
 "Programmer en C, c'est génial."
};

char search[100] = "Bonjour, comment ça va ?"; // on définit la phrase a rechercher

for (int i=0; i<10; i++){ // on parcourt le tableau par phrase
    for (int j=0; j<100; j++){ // on parcourt chaque phrase par caractères
        if (tab[i][j] != search[j]){ // si les caractères ne sont pas identiques, on break
            break;
        } else if (j==99){ // si on arrive au dernier caractères (tout va bien pour les autres)
            printf("Phrase trouvée \n"); // on affiche un résultat positif
            goto exit; // on utilise un goto pour skipper le cas de la phrase non trouvée
        } 
            
    }

}
printf("Phrase non trouvée \n");

exit:


return 0;
}