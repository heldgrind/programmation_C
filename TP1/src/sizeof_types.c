#include <stdio.h>

/******* Nom du programme : sizeof_types.c  *********************************************************/

/* Consignes :

- Affiche la taille des différents types de base

*****************************************************************************************************/


int main()
{
printf("Taille d'un char en octet : %ld\n",sizeof(char));
printf("Taille d'un short en octet %ld\n",sizeof(short));
printf("Taille d'un int en octet %ld\n",sizeof(int));
printf("Taille d'un long int en octet %ld\n",sizeof(long int));
printf("Taille d'un long long int en octet %ld\n",sizeof(long long int));
printf("Taille d'un float en octet %ld\n",sizeof(float));
printf("Taille d'un double en octet %ld\n",sizeof(double));
printf("Taille d'un long double en octet %ld\n",sizeof(long double));

 return 0;
}
