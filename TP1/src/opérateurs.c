#include <stdio.h>

/******* Nom du programme : opérateurs.c  *********************************************************/

/* Consignes :
- Écrivez un programme opérateurs.c qui utilise deux variables suivantes:
i. a = 16
ii. b = 3
- Testez les différents opérateurs arithmétiques et logiques.
*****************************************************************************************************/

int main()
{
int a = 16;
int b = 3;
printf("Prenons a=%d\n",a);
printf("Prenons b=%d\n",b);

// test des différents opérateurs arithmétiques et affichage du resultat
printf("Les opérateurs logiques\n");
printf("Comparons a!b =%d\n",a%b);
printf("Comparons a&&b =%d\n",a&&b);
printf("Comparons a||b =%d\n",a||b);

// test des différents opérateurs logiques et affichage du resultat
printf("Les opérateurs Arithmétiques\n");
printf("Comparons le reste de a/b =%d\n",a%b);
printf("Comparons a+b =%d\n",a+b);
printf("Comparons a-b =%d\n",a-b);
printf("Comparons a*b =%d\n",a*b);
printf("Comparons a/b =%d\n",a/b);


 return 0;
}