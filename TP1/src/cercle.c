#include <stdio.h>
#include <math.h>//on importe la bibliothèque math pour utilser PI

/******* Nom du programme : cercle.c  *********************************************************/

/* Consignes :
- Calcule l'aire et le périmètre d'un cercle
- Aire : Utilisez une variable rayon : float ou double
- Périmètre: Utilisez une variable rayon : float ou double

*****************************************************************************************************/

int main(){
    float R = 10;
    float aire = M_PI * R*R; //formule de l'air d'un cercle
    float perimetre = 2 * M_PI * R; //formule du périmètre d'un cercle
    printf("l'air du cercle est %f \n",aire);
    printf("le périmètre du cercle est %f \n",perimetre);
    return 0;
    
}