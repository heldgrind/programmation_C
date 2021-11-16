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
           max=*(tabentier+i);
       }
       else{
           if(*(tabentier+i)<min)
           {
            min=*(tabentier+i);
           }

       }
    }
      printf("Max :%d\n", *(tabentier+i));         // permet de tester la validé du code
      printf("Min :%d\n", *(tabentier+i));         // permet de tester la validé du code
/*
      printf("rentrez un caractère ");
    char caractere ='a';                 //initialisation du caractère
    scanf("%c",&caractere);              //recuperation de la valeur rentrée par l'user et stockage à l'adresse de caractère
    char *my_char_addr = &caractere;     // création du pointeur my_char_addr dont la valeur vaut l'adresse de la variable caractère
    printf("char = %c\n", *my_char_addr);  // on affiche la valeur contenu dans my_char_addr grâce à un pointeur
    printf("adresse char = %p\n", my_char_addr); // on affiche l'adresse de la valeur*/
return 0;
}

