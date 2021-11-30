#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

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
char *turing2[] = { 
  "bonjour tu vas",
  "test phrase",
  "je suis fort",
  "il fait beau",
  "je ne sais pas",
  "plus d'insipration",
  "encore quatre",
  "plus que trois",
  "et de deux",
  "et puis"
};

    int j,i;
    int trouve;
    char saisie[11]="test phrase";
    char csaisie[20];
    char cphrase[20];

  //  printf("saisir une phrase \n");
   // scanf("%[^\n]",saisie) ;
   // fgets(saisie,20,stdin);


// remplissage du tableau de caractère avec la phrase saisie
for(int i=0;i<sizeof(saisie)/sizeof(*saisie);i++){
    csaisie[i] = saisie[i];
  //  printf("%c ",csaisie[i]);
    }


//printf("%s\n",saisie);

for(int i=0;i<sizeof(turing2)/sizeof(*turing2);i++) // parcours de l'ensemble des phrases
{
    //printf("nombre de phrase %ld\n",sizeof(turing2)/sizeof(*turing2));
   // printf("phrase traitée %s\n",turing2[i]);

   
    if (sizeof(saisie)/sizeof(*saisie)!=sizeof(turing2[i])/sizeof(*turing2[i]))
    {
        printf("taille différente\n");
        printf("%ld ",sizeof(turing2[i])/sizeof(*turing2[i]);
        printf("%ld ",sizeof(saisie)/sizeof(*saisie));
    }else
    {
        printf("taille identique\n"); // si taille identique on test caractère par caractère
        for(int j=0;j<sizeof(turing2[i])/sizeof(*turing2[i]);j++) // parcours de l'ensemble des caractère de la phrase de taille identique
        {
            cphrase[j]= *turing2[i] ;   // on compare caractère par caractère avec cphrase caractère
            printf("%c turing ",*turing2[i]);
            printf(" %c cphrase\n ",cphrase[j]);
        }


        if(saisie==turing2[i]){
            printf("bon\n");

        }else{
            printf("pasbon\n");
        }
    }
}
 
}  
    