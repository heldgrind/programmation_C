#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
/******* Nom du programme : couleur_compteur.c  *********************************************************/

/* Consignes :

- Créer une structure de type couleur
- Créer et initialiser un tableau de 100 couleurs
- Affiche les couleurs et leurs nombre

*****************************************************************************************************/



int main(){
    /*
    char tabphrase1[500]="On peut tromper mille fois mille personnes, non, on peut tromper une fois mille personnes, mais on ne peut pas tromper mille fois mille personnes. Non, on peut tromper une fois mille personne mais on peut pas tromper mille fois une personne. Non...";
    char tabphrase2[100]="Vous voulez un whisky ?";
    char tabphrase3[100]="Non, juste un doigt.";
    char tabphrase4[100]="Non, je suis le Pape et j'attends ma soeur !";
    char tabphrase5[100]="Prenez un chewing gum Emile.";
    char tabphrase6[100]="Odile ! Moi c'est Odile ! Pluto c'est l'ami de Mickey !";
    char tabphrase7[100]="Ah non ! Pluto c'est le chien de Mickey ! L'ami de Mickey c'est Dingo !";
    char tabphrase8[100]="Mademoiselle Deray je dois vous informer que cet entretien sera intégralement pas filmé.";
    char tabphrase9[500]="Émile, vous m'avez sauvé ma vie ! Oh, je vous dois une fière bretelle !";
    char tabphrase10[500]="Il ne nous aimait pas parce que nous gagnions de l'argent, et dans son optique prolétarienne le profit lui était insoutenable.";
    */

    char phrase[]={"bonjour tu vas"};
    int j,i;
    int trouve;
    char saisie[20];
    char csaisie[20];
    char cphrase[20];
    printf("saisir une phrase ");
    fgets(saisie,20,stdin);
    for(int i=0;i<sizeof(phrase)/sizeof(*phrase);i++){
         cphrase[i] = phrase[i];
        printf("%c",cphrase[i]);
    }
    for(int i=0;i<sizeof(saisie)/sizeof(*saisie);i++){
         csaisie[i] = saisie[i];
    }
    for(i=0;i<20;i++){
        if (cphrase[i] == csaisie[i]){
        trouve=1;
        }
        else{
            trouve=0;
        }
    }
    if(trouve == 1){
        printf("phrase pareil");
    }
    if(trouve == 0){
        printf("phrase pas pareil");
    }
}  
    