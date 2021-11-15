#include <stdio.h>
/******* Nom du programme : conditions.c  *********************************************************/

/* Consignes :
- Écrivez un programme conditions.c qui utilise les boucles (for, while ou do..while) et les branchements inconditionnels (break ou continue) 
- Affichage de numéros <= 1000 qui sont divisible par:
a. 2 et 15
b. 103 ou 107
c. 7 ou 5, mais pas par 3
*****************************************************************************************************/

int main()
{
    int compteur ;
    for(compteur = 0 ; compteur <= 1000 ; compteur++)
    {
        if((compteur%2==0)&&((compteur%15==0)))
        {
         printf(" le nombre : %d est divisble par 2 ou 15\n",compteur);
       
        }

        if((compteur%103==0)|((compteur%107==0)))
        {
         printf(" le nombre : %d est divisble par 103 ou 107\n",compteur);
         
        }

        if((compteur%7==0)||((compteur%5==0)))
        {
           /* if (compteur%3==0)
            {
                break;
            }*/
            
         printf(" le nombre : %d est divisble par 7 ou 5 mais pas 3\n",compteur);
          continue ;
        }
    }

 return 0;
}