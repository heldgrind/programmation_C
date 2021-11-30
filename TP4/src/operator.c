#include<stdio.h>
#include <stdlib.h>
#include "operator.h"



int main(){
int num1 = 0;
int num2 = 0;
int resultat = 0;
char op = '-';

printf("rentré num1 :");
scanf("%d",&num1);

printf("rentré num2 :");
scanf("%d",&num2);


switch(op){
    case '+' : resultat = somme(num1,num2);
    break;
    case '-' : resultat = difference(num1,num2);
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
printf("le résultat est :%d \n",resultat );
return 0 ;
}

int somme( int num1,int num2){
    return num1 + num2;
}
int difference(int num1,int num2){
    return num1 - num2;
}
int produit(int num1, int num2){
    return num1 * num2;
}
int quotient(int num1, int num2){
    return num1 / num2;
}

int modulo(int num1, int num2){
    return num1 % num2;
}

int et(int num1 , int num2){
    return num1 && num2;
}

int ou(int num1, int num2){
    return num1 || num2;
}

int ou_negatif(int num1, int num2){
    return !(num1 || num2);
}