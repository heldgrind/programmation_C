#include <stdio.h>

/******* Nom du programme : opérateurs.c  *********************************************************/

/* Consignes :

- Utiliser les boucles (for, while ou do..while) et les branchements inconditionnels (break ou continue) 
- Affichage de numéros <= 1000 qui sont divisible par: 
a. 2 et 15

b. 103 ou 107

c. 7 ou 5, mais pas par 3

*****************************************************************************************************/

int main()
{
int a = 16;
int b = 3;
printf("Prenons a=%d\n",a);
printf("Prenons b=%d\n",b);

printf("Les opérateurs logiques\n");
printf("Comparons a!b =%d\n",a%b);
printf("Comparons a&&b =%d\n",a&&b);
printf("Comparons a||b =%d\n",a||b);


printf("Les opérateurs Arithmétiques\n");
printf("Comparons le reste de a/b =%d\n",a%b);
printf("Comparons a+b =%d\n",a+b);
printf("Comparons a-b =%d\n",a-b);
printf("Comparons a*b =%d\n",a*b);
printf("Comparons a/b =%d\n",a/b);


 return 0;
}