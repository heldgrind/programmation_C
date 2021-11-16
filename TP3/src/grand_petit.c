#include <stdio.h>
#include <stdlib.h>

/******* Nom du programme : Grand_petit.c  *********************************************************/

/* Consignes :

- Créer un tableau de 100 entiers  calculer
- Calculer le numéro plus grand
- Calculer le numéro plus petit

*****************************************************************************************************/

int main(){

int tabentier[100]; // création tableau d'entier
int i=0;
tabentier[0] = rand() % (400 + 1);  // initialisation du premier element pour min et max
int min =tabentier[0];
int max=tabentier[0];
 for (i = 1 ; i < sizeof(tabentier)/sizeof(*tabentier) ; i++)
    {
    *(tabentier+i) = rand() % (400 + 1);            // remplissage du tableau
    printf("Entier :%d\n", *(tabentier+i));         // permet de tester la validé du code
    if (*(tabentier+i)>max)                         // si l'entier courant est >max
       {
           max=*(tabentier+i);                      // on remplace l'entier courant par max
       }
       else{
           if(*(tabentier+i)<min)                   // si l'entier courant <min
           {
            min=*(tabentier+i);                     // on remplace la valeur de min par l'entier courant
           }
       }
    }
      printf("Max :%d\n", max);         // permet de tester la validé du code
      printf("Min :%d\n", min);         // permet de tester la validé du code
return 0;
}

