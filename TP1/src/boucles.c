#include <stdio.h>
/******* Nom du programme : boucles.c  *********************************************************/

/* Consignes :
- Utilise for, # et * et qui affiche un triangle rectangle. 
- La taille du triangle est dependent de la valeur de la variable compteur (compteur < 4 inacceptable)

*****************************************************************************************************/

int main(){
    printf("rentrez une longueur");
    int ligne = 0;
    int a = 0;
    int i;
    
    scanf("%d",&ligne); //ici on rentre la longueur de la boucl
    for(a=0; a<=ligne; a++){ //on descend sur l'axe Y
        for(i=0;i<=a;i++){ //on rajoute sur l"axe X pour fair un triangle
            printf("*");
        }
        printf("\n");

    }
}