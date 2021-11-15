#include <stdio.h>
#include <string.h>

/******* Nom du programme : etudiant2.c  *********************************************************/

/* Consignes :

- Utiliser une structure
- Déclarer, initialiser et afficher les détails de ces cinq étudiants.

*****************************************************************************************************/





int main(){
int i;
struct etudiant{ //on définit la structure pour étudiant
char prenom[30];
char nom[30];
char rue[30];
char ville[30];
short notes_prog;
short notes_systeme;
};

struct etudiant etudiant_cpe[5]; // on crée un tableau etudiant_cpe ou une position sera les renseignements d'un élève, ici nous pouvons renseigner 5 élèves

strcpy(etudiant_cpe[0].prenom, "Pierre");
strcpy(etudiant_cpe[0].nom, "Dupont");
strcpy(etudiant_cpe[0].rue, "Boulevard du 11 novembre 1918");
strcpy(etudiant_cpe[0].ville, "Villeurbanne");
etudiant_cpe[0].notes_prog = 19;
etudiant_cpe[0].notes_systeme = 12;

strcpy(etudiant_cpe[1].prenom, "Jean");
strcpy(etudiant_cpe[1].nom, "Moulin");
strcpy(etudiant_cpe[1].rue, "Rue du bout du monde");
strcpy(etudiant_cpe[1].ville, "Toulouse");
etudiant_cpe[1].notes_prog = 5;
etudiant_cpe[1].notes_systeme = 15;

strcpy(etudiant_cpe[2].prenom, "Sarah");
strcpy(etudiant_cpe[2].nom, "Croche");
strcpy(etudiant_cpe[2].rue, "Rue du téléphone");
strcpy(etudiant_cpe[2].ville, "Montcuq");
etudiant_cpe[2].notes_prog = 4;
etudiant_cpe[2].notes_systeme = 2;

strcpy(etudiant_cpe[3].prenom, "Jeanne");
strcpy(etudiant_cpe[3].nom, "Darc");
strcpy(etudiant_cpe[3].rue, "Rue du brasier");
strcpy(etudiant_cpe[3].ville, "Rouen");
etudiant_cpe[3].notes_prog = 6;
etudiant_cpe[3].notes_systeme = 9;

strcpy(etudiant_cpe[4].prenom, "Alain");
strcpy(etudiant_cpe[4].nom, "Térieur");
strcpy(etudiant_cpe[4].rue, "Avenue de la maison");
strcpy(etudiant_cpe[4].ville, "Lille");
etudiant_cpe[4].notes_prog = 19;
etudiant_cpe[4].notes_systeme = 16;



for(i=0;i<=4;i++){ //on parcourt le tableau et on ressort l'information à la position i 
    printf("%s %s %s %s la note de prog est %hd la note de systeme est %hd \n ",etudiant_cpe[i].prenom,etudiant_cpe[i].nom,etudiant_cpe[i].rue,etudiant_cpe[i].ville,etudiant_cpe[i].notes_prog,etudiant_cpe[4].notes_systeme );
    printf("---------------------------------------------------------------------------\n ");
}
}