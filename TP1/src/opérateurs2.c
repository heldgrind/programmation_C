#include<stdio.h>


/******* Nom du programme : opérateurs2.c  *********************************************************/

/* Consignes :

- Utiliser switch
- La variable op contient un de ces différents opérateurs. (+, -, *, /, %, &, |, ~)

*****************************************************************************************************/

int main(){
int num1 = 0;
int num2 = 0;
int resultat = 0;
char op = '-';

printf("rentré num1");
scanf("%d",&num1);

printf("rentré num2");
scanf("%d",&num2);


switch(op){
    case '+' : resultat =num1+num2; // si char est  = + alors on ajoute les deux variables
    break;
    case '-' : resultat= num1-num2; //si char est =- alors on ajoute les deux variables
    break;
    case'/' : resultat =num1/num2;
    break;
    case'%' : resultat =num1%num2;
    break;
    case'&' : resultat =num1&num2;
    break;
    case'|' : resultat =num1|num2;
    break;
}
printf("le résultat est %d",resultat );
}