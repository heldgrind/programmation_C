#include <stdio.h>
/******* Nom du programme : boucles.c  *********************************************************/

/* Consignes :
- Utilise for, # et * et qui affiche un triangle rectangle. 
- La taille du triangle est dependent de la valeur de la variable compteur (compteur < 4 inacceptable)

*****************************************************************************************************/

int main(){
 int i;
 int ligne = 0;
 int colonne = 0;

 printf("Merci de bien vouloir renseigner la taille souhaitée ");
 scanf("%d",&i);
 
 if (i < 4) { 
    printf("innaceptable\n"); // pour ne pas avoir d'erreur nous n'exécutons le code qu'au dessus de 4 lignes
     }else{
        while (colonne < i) //on descend tant que le nombre de ligne n'est pas fini 
        {
        while (ligne < colonne+1) 
        {
            if (colonne==i-1){
                printf("*");
                } 

            else{ 
            if (ligne==0){ //pour avoir toutes les étoiles à gauche
                printf("*");
                } 
            else if (ligne==colonne){ // les étoiles tout a droite 
                printf("*");
                } 
            else{
                printf("#"); // si on ne remplit aucune de ces conditions alors nou smettons des #
                } 
            }
         ligne=ligne+1; //on incrémente la boucle
        }
        ligne=0; 
        printf("\n"); colonne=colonne+1; //on agrandit le nombre de colonne 
         }
     }

 
 return 0;
}