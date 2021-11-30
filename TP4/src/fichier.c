#include<stdio.h>
#include<stdlib.h>
#include "fichier.h"

int lire_fichier(char *nom_de_fichier){
    FILE* fichier = NULL;
    char c;
    if (fichier == NULL){
        printf("erreur ouverture")
        return 1;
    }
    fichier =fopen(nom_de_fichier,"r");
        while((c=fgetc(fichier))!=EOF){
        printf("%c",c);
    }

    fclose(fichier);
}
int ecrire_dans_fichier(char *nom_de_fichier, char *message){
    FILE* fichier = NULL;
    fichier =fopen(nom_de_fichier,"w+");
    fputs(message,fichier);
    fclose(fichier);
}
int main(){
    char nom_de_fichier[]="";
    char message[]="";
    printf("rentrer le nom du fichier \n");
    scanf("%s",nom_de_fichier);
    lire_fichier(nom_de_fichier);

    printf("entrer le texte pour le fichier \n");
    scanf("%[^\n]", message);
    ecrire_dans_fichier(nom_de_fichier,message);
    return 0;

    
}