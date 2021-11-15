#include <stdio.h>

/******* Nom du programme : Puissance.c  *********************************************************/

/* Consignes :

- Renseigner 2 entiers
- Réaliser l'opération mathématique entier a la puissance entier2

*****************************************************************************************************/


int main()
{

    // saisie donnée 1
    printf("rentrez un entier");
    int entier = 0;
    scanf("%d",&entier);

    // saisie donnée 2
    printf("rentrez un second entier");
    int entier2 = 0;
    scanf("%d",&entier2);

    //condition de traitement
    if(entier2 == 0)                    // si puissance 0, le resultat est 1
    {
       printf("Le résultat est : 1"); 
    }
    else {                              //sinon multiplier l'entier par lui même pour chaque itération de entier2
            int valeur_de_base = entier;
            while (entier2>1)
            {
               entier=entier*valeur_de_base;
                entier2--;
            }
    
        //affichage du resultat
        printf("Le résultat est : %d\n",entier);
    }

  return 0 ; 

}





