#include <stdio.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier)
{
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
    char notes_prog[30];
    char notes_systeme[30];
    };

    struct etudiant etudiant_cpe[5]; // on crée un tableau etudiant_cpe ou une position sera les renseignements d'un élève, ici nous pouvons renseigner 5 élèves

    for(i=0;i<=4;i++){
    printf("entrer le prenom \n");
    fgets(etudiant_cpe[i].prenom, 30, stdin);
    etudiant_cpe[i].prenom[strlen(etudiant_cpe[i].prenom) - 1] = '\0';
    printf("entrer le nom \n");
    fgets(etudiant_cpe[i].nom, 30, stdin);
    etudiant_cpe[i].nom[strlen(etudiant_cpe[i].nom) - 1] = '\0';
    printf("entrer la rue \n");
    fgets(etudiant_cpe[i].rue, 30, stdin);
    etudiant_cpe[i].rue[strlen(etudiant_cpe[i].rue) - 1] = '\0';
    printf("entrer la ville \n");
    fgets(etudiant_cpe[i].ville, 30, stdin);
    etudiant_cpe[i].ville[strlen(etudiant_cpe[i].ville) - 1] = '\0';
    printf("entrer la note prog \n");
    fgets(etudiant_cpe[i].notes_prog, 30, stdin);
    etudiant_cpe[i].notes_prog[strlen(etudiant_cpe[i].notes_prog) - 1] = '\0';
    printf("entrer la note systeme \n");
    fgets(etudiant_cpe[i].notes_systeme, 30, stdin);
    etudiant_cpe[i].notes_systeme[strlen(etudiant_cpe[i].notes_systeme) - 1] = '\0';

    // remplissage de la BDD(fichier)
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].prenom);
    ecrire_dans_fichier(nom_de_fichier,", ");
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].nom);
    ecrire_dans_fichier(nom_de_fichier,", ");
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].rue);
    ecrire_dans_fichier(nom_de_fichier,", ");
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].ville);
    ecrire_dans_fichier(nom_de_fichier,", ");
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].notes_prog);
    ecrire_dans_fichier(nom_de_fichier,", ");
    ecrire_dans_fichier(nom_de_fichier,etudiant_cpe[i].notes_systeme);
    ecrire_dans_fichier(nom_de_fichier,"\n");

    }

/*
    for(i=0;i<=4;i++){ //on parcourt le tableau et on ressort l'information à la position i 
        printf("%s %s %s %s la note de prog est %s la note de systeme est %s \n ",etudiant_cpe[i].prenom,etudiant_cpe[i].nom,etudiant_cpe[i].rue,etudiant_cpe[i].ville,etudiant_cpe[i].notes_prog,etudiant_cpe[4].notes_systeme );
        printf("---------------------------------------------------------------------------\n ");
    }*/

}

void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    FILE* fichier = NULL;
    fichier =fopen(nom_de_fichier,"a");
    fputs(message,fichier);
    fclose(fichier);
}