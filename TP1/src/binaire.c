#include<stdio.h>

/******* Nom du programme : binaire.c  *********************************************************/

/* Consignes :
- Utilise for pour l'affichage d'une variable int en format binaire
- Testez votre code avec les 5 numéros suivants : 0, 4096, 65536, 65535, 1024

*****************************************************************************************************/
int main(){
   int nombre = 4096;
   int i;
   int binaire[(sizeof (int))*8]; //le tableau prend la taille mximal en binaire qu'un int peut prendre
   for(i=0; i<(sizeof (int))*8;i++){
       binaire[i] = nombre % 2; //on effectue le modulo pour récupérer 1 ou 0
       nombre = nombre/2; //on divise le reste par 2 
   } 
   for(i=i-1;i>=0;i--){ //boucle qui remonte la chaîne dans le sens inverse
       printf("%d",binaire[i]);
   }
   return 0;
}