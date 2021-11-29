#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/******* Nom du programme : Chercher.c  *********************************************************/

/* Consignes :

- Créer un tableau de 100 entiers
- Si l'entier est présent dans le tableau, affichez le message 'entier présent'.  

*****************************************************************************************************/

int main(){

int tabentier[100]; // création tableau d'entier
int i=0;
int j=0;
bool trouve = false;


// remplissage du tableau avec les 100 valeurs
 for (i = 0 ; i < sizeof(tabentier)/sizeof(*tabentier) ; i++)
    {
    *(tabentier+i) = rand() % (400 + 1);          
    printf("Entier :%d\n", *(tabentier+i));         // permet de tester la validé du code
    }

printf("rentrez un entier");
int entier = 0;
scanf("%d",&entier);


 while(j<sizeof(tabentier)/sizeof(*tabentier)&trouve ==false)
     {
         
         if (tabentier[j]==entier)
          {
            trouve =true; // si le chiffre est trouvé on met trouve= true
          }
          else
           {
            trouve=false;   
           }  
           j=j+1;
     }


    //affichage des resultats 
if (trouve ==1 )
{
    printf("Entier présent\n") ;
    }else{
        printf("Entier non présent\n");
    }


return 0;
}