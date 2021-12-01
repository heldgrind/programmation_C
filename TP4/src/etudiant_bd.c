#include <stdio.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier){
    FILE* fichier = NULL;
    char c;
    fichier =fopen(nom_de_fichier,"r");
    if (fichier == NULL){
        printf("erreur ouverture");
    }
        while((c=fgetc(fichier))!=EOF){
        printf("%c",c);
    }

    fclose(fichier);
}



int main(){
int i;
char nom_de_fichier[]="etudiant_bd.txt";
struct etudiant{ //on définit la structure pour étudiant
char prenom[30];
char nom[30];
char rue[30];
char ville[30];
short notes_prog;
short notes_systeme;
};

struct etudiant etudiant_cpe[5]; // on crée un tableau etudiant_cpe ou une position sera les renseignements d'un élève, ici nous pouvons renseigner 5 élèves

for(i=0;i<=4;i++){
printf("entrer le prenom \n");
scanf("%s",etudiant_cpe[i].prenom);
printf("entrer le nom \n");
scanf("%s",etudiant_cpe[i].nom);
printf("entrer la rue \n");
scanf("%s",etudiant_cpe[i].rue);
printf("entrer la ville \n");
scanf("%s",etudiant_cpe[i].ville);
printf("entrer la note prog \n");
scanf("%s",&etudiant_cpe[i].notes_prog);
printf("entrer la note systeme \n");
scanf("%s",&etudiant_cpe[i].notes_systeme);

ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i]);
//strcpy(etudiant_cpe[0].prenom, prenom);
//strcpy(etudiant_cpe[0].nom, "Dupont");
//strcpy(etudiant_cpe[0].rue, "Boulevard du 11 novembre 1918");
//strcpy(etudiant_cpe[0].ville, "Villeurbanne");
//etudiant_cpe[0].notes_prog = 19;
//etudiant_cpe[0].notes_systeme = 12;
}

/*
for(i=0;i<=4;i++){ //on parcourt le tableau et on ressort l'information à la position i 
    printf("%s %s %s %s la note de prog est %hd la note de systeme est %hd \n ",etudiant_cpe[i].prenom,etudiant_cpe[i].nom,etudiant_cpe[i].rue,etudiant_cpe[i].ville,etudiant_cpe[i].notes_prog,etudiant_cpe[4].notes_systeme );
    printf("---------------------------------------------------------------------------\n ");
}
*/
}
void ecrire_dans_fichier(char *nom_de_fichier, struct etudiant etudiant_cpe){
    FILE* fichier = NULL;
    fichier =fopen(nom_de_fichier,"a");

    fprintf(fichier,"%s", etudiant_cpe->prenom);
    fclose(fichier);
}