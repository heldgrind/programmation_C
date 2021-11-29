#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){


    //***************** reprise du code de tri.c *****************//
    int tableau[100];
    int i,perm,j;
    for (i = 0 ; i < sizeof(tableau)/sizeof(*tableau) ; i++)
    {
    *(tableau+i) = rand() % (400 + 1);
     printf("Entier :%d\n", tableau[i]);       // affichage des entiers du tableau
    }
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            if(tableau[j]>tableau[j+1]){
                perm=tableau[j];
                tableau[j]=tableau[j+1];
                tableau[j+1]=perm;
            }
        }

    } 
    printf("affichage après le trie");
    for (i = 0 ; i < sizeof(tableau)/sizeof(*tableau) ; i++){
         printf("Entier :%d\n", tableau[i]); 
    }   
//***************** reprise du code de tri.c *****************//


//******************** Début du programme principal ********************// 
bool trouve = false;
int moitier=0;
int debut =0;
int fin = sizeof(tableau)/sizeof(*tableau);

printf("rentrez un entier\n");
int entier = 0;
scanf("%d",&entier);

// parcours du tableau et test pour vérifier si le  chiffre rentré par l'utilisateur est trouvé
 while(debut<fin &trouve ==false)
     {
         moitier=floor((debut+fin)/2);
         printf("Entier :%d\n", moitier);
         if (tableau[moitier]==entier)
          {
             trouve =true; // si le chiffre est trouvé on met trouve= true
          }
          else
           {  
              if(entier>tableau[moitier])
             {
                  debut=moitier+1;
               }else
               {
                    fin=moitier-1;
             }
           }  
     }

//affichage des resultats 
if (trouve ==1 )
{
    printf("Entier présent\n") ;
    }else{
        printf("Entier non présent\n");
    }


}
