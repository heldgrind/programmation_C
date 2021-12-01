#include<stdio.h>
#include<stdlib.h>
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

void ecrire_dans_fichier(char *nom_de_fichier, char *message){
    FILE* fichier = NULL;
    fichier =fopen(nom_de_fichier,"a");

    fputs(message,fichier);
    fclose(fichier);
}

int main(){
    char nom_de_fichier[50];
    char message[50];

    printf("rentrer le nom du fichier \n");
    scanf("%s",nom_de_fichier);
    lire_fichier(nom_de_fichier);

    printf("\nentrer le texte pour le fichier");
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // pour enlever \n laissé par scanf pour que fgets ne soit pas skip et ainsi vider stdin
    fgets(message,50,stdin);

    ecrire_dans_fichier(nom_de_fichier,message);
    return 0;

    
}