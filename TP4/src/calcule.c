#include<stdio.h>
#include <stdlib.h>
#include "operator.h"



int main(int argc, char** argv)
{
    if (argc!=4)
    {
        printf("Mauvais nombre d'argument saisies ");

    }
    else{
        char op = *argv[1];
        int num1 = *argv[2] - '0';
        int num2 = *argv[3] - '0';
        int resultat = 0;

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
    printf("le rÃ©sultat est : %d \n",resultat );
    return 0 ;
    }
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

    
   // argc contient le nombre d'arguments passÃ©s dans la ligne de commande, et argv est un tableau qui contient chaque argument
//23 sera dans argv[1], '*' dans argv[2] et 40 dans argv[3], tout sous forme de string*/