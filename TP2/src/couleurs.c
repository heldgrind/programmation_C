#include <stdio.h>
/******* Nom du programme : couleurs.c  *********************************************************/

/* Consignes :

- Créer une structure de type couleur
- Créer et initialiser un tableau de 10 couleurs

*****************************************************************************************************/


// Définition de la structure RGBA
struct  RGBA
{
 int rouge ;  
 int vert ;
 int bleu ;
 int alpha ;

};

int main(){

struct RGBA tabcouleur[10]; // initialisation du tableau contenant des objets de type structure RGBA


for (int i=0;i<sizeof(tabcouleur)/sizeof(*tabcouleur);i++) // parcours du nombre d'éléments
{
// attribution des composantes rouge/vert/bleu/alpha pour l'ensembles des éléments du tableau    
tabcouleur[i].rouge= 0xef ;
tabcouleur[i].bleu= 0x0000FF;
tabcouleur[i].vert= 0x78;
tabcouleur[i].alpha= 0x78;   
//print f pour vérifier que les arguments ont bien été pris en comptes
printf("%d,%d,%d,%d\n", tabcouleur[i].rouge,tabcouleur[i].bleu, tabcouleur[i].vert, tabcouleur[i].alpha);
}

return 0;
}
