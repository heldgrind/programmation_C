#include <stdio.h>
#include <stdbool.h>
/******* Nom du programme : couleur_compteur.c  *********************************************************/

/* Consignes :

- Créer une structure de type couleur
- Créer et initialiser un tableau de 100 couleurs
- Affiche les couleurs et leurs nombre

*****************************************************************************************************/

// Définition de la structure RGBA
struct  RGBA
{
 int rouge ;  
 int vert ;
 int bleu ;
 int alpha ;

};
struct  RGBA_iter
{
 struct RGBA  monRGBA;  
 int iteration ;
};

int main(){

struct RGBA tabcouleur[100]; 
struct RGBA_iter tabrgbaiter[100];



///****************** Remplissage du tabeau******************************//
for (int i=0;i<sizeof(tabcouleur)/sizeof(*tabcouleur);i++) // parcours du nombre d'éléments
{
// attribution des composantes rouge/vert/bleu/alpha pour l'ensembles des éléments du tableau    
tabcouleur[i].rouge= 0xef ;
tabcouleur[i].bleu= 0x0000FF;
tabcouleur[i].vert= 0x78;
tabcouleur[i].alpha= 0x78;
//print f pour vérifier que les arguments ont bien été pris en comptes
//printf("%d,%d,%d,%d\n", *tabcouleur[i].rouge,tabcouleur[i].bleu, tabcouleur[i].vert, tabcouleur[i].alpha);
}
///*****************************************************************//

// initialisation d'une couleur différente pour les tests
tabcouleur[4].rouge= 0x78 ;
tabcouleur[4].bleu= 0x78;
tabcouleur[4].vert= 0x78;
tabcouleur[4].alpha= 0x78;

tabcouleur[5].rouge= 0x80 ;
tabcouleur[5].bleu= 0x80;
tabcouleur[5].vert= 0x80;
tabcouleur[5].alpha= 0x80;


///****************** Remplissage du tabeau2******************************//
for (int i=0;i<sizeof(tabrgbaiter)/sizeof(*tabrgbaiter);i++) // parcours du nombre d'éléments
{ 
tabrgbaiter[i].iteration=0;  
}
///*****************************************************************//


//initialisation du tableau tabrgbaiter
tabrgbaiter[0].iteration=1 ;
tabrgbaiter[0].monRGBA=tabcouleur[0] ;

 int  count=0;
 //si couleur trouvé parcours tableau tabrgbaiter et incrémente de 1 l'élément correspondant dans
for (int r=1;r<sizeof(tabcouleur)/sizeof(*tabcouleur);r++) // parcours du nombre d'éléments
{
   //  printf("couleur: %d,%d,%d,%d\n",tabcouleur[r].rouge,tabcouleur[r].bleu,tabcouleur[r].vert,tabcouleur[r].alpha);
   bool trouve = false;
    for (int j=0;j<sizeof(tabrgbaiter)/sizeof(*tabrgbaiter);j++)
    {
            if(tabcouleur[r].rouge==tabrgbaiter[j].monRGBA.rouge & tabcouleur[r].bleu==tabrgbaiter[j].monRGBA.bleu & tabcouleur[r].vert==tabrgbaiter[j].monRGBA.vert & tabcouleur[r].alpha==tabrgbaiter[j].monRGBA.alpha)
            {
            tabrgbaiter[j].iteration=tabrgbaiter[j].iteration+1;
             trouve = true;
            }else{        
            }
    }

    if(trouve==true){
    }else{
        if(trouve==false){
            count =count+1;
            tabrgbaiter[count].iteration=tabrgbaiter[count].iteration+1;
            tabrgbaiter[count].monRGBA.rouge=tabcouleur[r].rouge;
            tabrgbaiter[count].monRGBA.bleu=tabcouleur[r].bleu;
            tabrgbaiter[count].monRGBA.vert=tabcouleur[r].vert;
            tabrgbaiter[count].monRGBA.alpha=tabcouleur[r].alpha;
        }else{
        }
      }

      
}
//***** affichage des résultats**************************************//////////////

 for (int j=0;j<sizeof(tabrgbaiter)/sizeof(*tabrgbaiter);j++) // parcours du nombre d'éléments
    {
        if(tabrgbaiter[j].iteration!=0) 
        {
             printf("0x%x 0x%x 0x%x 0x%x",tabrgbaiter[j].monRGBA.rouge,tabrgbaiter[j].monRGBA.bleu,tabrgbaiter[j].monRGBA.vert,tabrgbaiter[j].monRGBA.alpha);
        printf(" %d\n", tabrgbaiter[j].iteration);
        }else{

        }
    }
// sinon tu rentre l'element dans tabgbaiter
return 0;
}