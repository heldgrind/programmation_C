#include <stdio.h>
#include <stdlib.h>

/******* Nom du programme : Chercher.c  *********************************************************/

/* Consignes :

- Créer un tableau de 100 entiers
- Si l'entier est présent dans le tableau, affichez le message 'entier présent'.  

*****************************************************************************************************/

int main(){

int tabentier[100]; // création tableau d'entier
int i=0;
int j=0;
char c[]= "Le chiffre n a pas été trouvé";


// remplissage du tableau avec les 100 valeurs
 for (i = 0 ; i < sizeof(tabentier)/sizeof(*tabentier) ; i++)
    {
    *(tabentier+i) = rand() % (400 + 1);          
    printf("Entier :%d\n", *(tabentier+i));         // permet de tester la validé du code
    }

printf("rentrez un entier");
int entier = 0;
scanf("%d",&entier);


 while(j<sizeof(tabentier)/sizeof(*tabentier))
     {
         if (tabentier[i]==entier)
          {
            char c[]="Trouvé !\n";
          }
          else
           {
            j=j+1;    
           }  
     }

printf("%s",c);
return 0;
}