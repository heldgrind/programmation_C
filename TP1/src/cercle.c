#include <stdio.h>
#include <math.h>//on importe la bibliothèque math pour utilser PI

int main(){
    float R = 10;
    float aire = M_PI * R*R; //formule de l'air d'un cercle
    float perimetre = 2 * M_PI * R; //formule du périmètre d'un cercle
    printf("l'air du cercle est %f \n",aire);
    printf("le périmètre du cercle est %f \n",perimetre);
    return 0;
    
}