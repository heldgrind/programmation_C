#include <stdio.h>

/******* Nom du programme : etudiant.c  *********************************************************/

/* Consignes :

- Utiliser des tableaux 
- Déclarer, initialiser et afficher les détails de ces cinq étudiants.

*****************************************************************************************************/


int main(){
int i;

char* etudiant[5]={""};

printf("entrer le nom :");
scanf("%s",&etudiant[0]); 

printf("entrer le prenom :");
scanf("%s",&etudiant[1]);

printf("rentrer l'adresse :");
scanf("%s",&etudiant[2]);

printf("note de programmation :");
scanf("%s",&etudiant[3]);

printf("note de systeme");
scanf("%s",&etudiant[4]);

for(i=0;i<=5;i++){ //on parcourt le tableau et on ressort l'information à la position i 
    printf("%s ",&etudiant[i]);
}
return 0;
}