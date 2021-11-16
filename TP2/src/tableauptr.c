#include <stdio.h>
#include <stdlib.h>


/******* Nom du programme : Tableauptr  *********************************************************/

/* Consignes :

- Créer un tableau d'entier et un tableau  de float avec des valeurs aléatoires
- Si l'indice i est divisible par 2, multiplier la valeur à cette indice par 3

*****************************************************************************************************/

int main(){


int tabentier[10]; // création tableau d'entier
float tabfloat[10]; // création tableau d'entier
int i=0;
 for (i = 0 ; i < sizeof(tabentier)/sizeof(*tabentier) ; i++)
    {
        *(tabentier+i) = rand() % (100 + 1); //remplissage par un nombre aleatoire des cases du tableau une par une
        *(tabfloat+i) = (float)rand()/RAND_MAX;//remplissage par un nombre aleatoire des cases du tableau une par une
        if ((i % 2) ==0)     //si l'indice est divisible par 2,
        {
         printf("Entier avant traitement :%d\n", *(tabentier+i));         // permet de tester la validé du code
         printf("Float avant traitement :%f\n", *(tabfloat+i));
        *(tabentier+i) = *(tabentier+i)*3 ; //on multiplie la valeur à cet indice par 3
        *(tabfloat+i) = *(tabfloat+i)*3 ; //on multiplie la valeur à cet indice par 3
        printf("Entier après traitement : %d\n", *(tabentier+i));   //permet de tester la validé du code
        printf("Float après traitement :%f\n", *(tabfloat+i));
        }
    }
return 0;
}