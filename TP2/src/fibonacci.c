#include <stdio.h>

/******* Nom du programme : Fibonnaci.c  *********************************************************/

/* Consignes :

- Affiche les n termes de la suite de Fibonacci U0, U1, U2,...Un

*****************************************************************************************************/


int main(){
int u0 = 1; 
int u1= 1; 
int Un_2= 0;
int a=0;
do{
   Un_2=u1+u0; //on affecte a un+2 la valeur de un+1 et un donc un = un+1 + u0 dans ce cas la
    u0=u1; //ensuite u0 prend la valeur de un+1
    u1=Un_2; // un+1 prend la valeur de un+2

    a=a+1; // le compteur s'incrémente
    printf("%d\n",Un_2);
}while(a<=15);// la fonction arrêtre de s'effectuer une fois que le compteur est égale à 15
}