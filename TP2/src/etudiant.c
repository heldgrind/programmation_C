#include <stdio.h>

/******* Nom du programme : etudiant.c  *********************************************************/

/* Consignes :

- Utiliser des tableaux 
- Déclarer, initialiser et afficher les détails de ces cinq étudiants.

*****************************************************************************************************/


int main(){
int i=0;

char* etudiant_nom[5]={"a","b","c","d","e"};
char* etudiant_prenom[5]={"v","w","x","y","z"};
char* etudiant_adresse[5]={"aa","bb","cc","dd","ee"};
int etudiant_noteprog[5]={1,2,3,4,5};
int etudiant_notesys[5]={6,7,8,9,10};



/*
for(i=0;i<=5;i++){ 
printf("entrer le nom :");
scanf("%s",etudiant_nom[i]); 

printf("entrer le prenom :");
scanf("%s",etudiant_prenom[i]);

printf("rentrer l'adresse :");
scanf("%s",etudiant_adresse[i]);

printf("note de programmation :");
scanf("%s",etudiant_noteprog[i]);

printf("note de systeme");
scanf("%s",etudiant_notesys[i]);

}*/
for(i=0;i<=4;i++){
    printf("élève %d %s %s habite a %s, note de prog : %d , note de sys : %d \n",i,etudiant_nom[i],etudiant_prenom[i],etudiant_adresse[i],etudiant_noteprog[i],etudiant_notesys[i]);
}
return 0;
}