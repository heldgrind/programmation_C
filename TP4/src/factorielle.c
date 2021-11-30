#include <stdio.h>
/******* Nom du programme : couleurs.c  *********************************************************/

/* Consignes :

- Créer une structure de type couleur
- Créer et initialiser un tableau de 10 couleurs

*****************************************************************************************************/
int factorielle (int num) {
  if (num == 0) {
    return 1;
  }
  else {
    return (num * factorielle (num-1));
  }
}

int resultat,resultat2;

int main()
{
   resultat=factorielle(10);
   resultat2=factorielle(0);
   printf("le resultat de factorielle 10 est %d\n",resultat);
   printf("le resultat de factorielle 0 est %d\n",resultat2);

}