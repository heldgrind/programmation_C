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
int min =0;
int max=0;

int i=0;
 for (i = 0 ; i < sizeof(tabentier)/sizeof(*tabentier) ; i++)
    {
    *(tabentier+i) = rand() % (100 + 1);            // remplissage du tableau
    printf("Entier :%d\n", *(tabentier+i));         // permet de tester la validé du code
    if (*(tabentier+i)>max)
       {

       }
       else{
           if(*(tabentier+i)<min)
           {
               
           }


       }

 /*printf("rentrez un short ");
    short  petit = 0;
    scanf("%hd",&petit);
    short *my_short_addr = &petit;
    printf("short = %hd\n", *my_short_addr);
    printf("adresse short = %p\n", my_short_addr);*/



    }
return 0;
}

