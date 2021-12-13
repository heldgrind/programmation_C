#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

/******* Nom du programme : chercherfichier.c  *********************************************************/

/* Consignes : 

 -  écrivez un fichier chercherfichier.c qui cherche une phrase dans un fichier, les deux sont à saisir par l'utilisateur
 - doit afficher toutes les lignes de fichier où les mots sont présents et également le nombre de fois qu'ils sont présents
 - exemple : $ ./chercherfichier int fichier.c   Ligne 10, 2 fois Ligne 30, 1 fois 

*****************************************************************************************************/

int main(int argc, char** argv)
{
// déclaration des variables
    FILE* fichier = NULL;
    char c;
    int nb_ligne_fich =0;
    int j=0;
    char tabcaracterefich[400][400];
    char tabcaractere[100] ;
    int nbcaracparligne[100] ;
    char tabMotATester[100] ;
    

    //*************** lecture du fichier et remplissage du tableau a deux dimensions[j][nb_ligne] *********************///
    fichier =fopen(argv[2],"r");
    if (fichier == NULL){
        printf("erreur ouverture");
    }
    else{
            while((c=fgetc(fichier))!=EOF){
                // on compte le nombre de ligne du fichier pour pouvoir parcourir ensuite sur ce nb_ligne
                if(c=='\n'){
                    nbcaracparligne[nb_ligne_fich]= j;//sauvegarde du nombre de lettre par ligne pour futur parcours
                    nb_ligne_fich=nb_ligne_fich+1;
                    j=0;
                }
                // on vérifie s'il s'agit d'un espace, si c'est le cas on ne le rentre pas dans le tableau
                 if(c!=' ')
               {
                tabcaracterefich[nb_ligne_fich][j]= c; // CHIANT: je rempli des caracteres faudrait que je concatene deux chaines plutot, l'idée est de dire qu'a l'indice je met un mot, la ou pour le moment je rentre qu'un caractère et incremente j
                 j++;
              }
            }
    }

    //***************** Séparation caractère par caractère du mot a tester et stockage dans le tab tabMotATester   *****************//
    for (int r=0; r<strlen(argv[1]);r++)
    {
        tabMotATester[r]=argv[1][r];
        printf("%c\n",tabMotATester[r]);

    }
    //tabMotATester

    //********Parcours du tableau a deux dimensions précédemment rempli et comparaison au mot clé**************//
    for (int i=0; i<nb_ligne_fich;i++)
    {
        int count = 0;
       // printf("%d",nbcaracparligne[i]);
     // for(int k=0;k < strlen(tabcaracterefich[i]);k++)
     for(int k=0;k <nbcaracparligne);k++)
        {
                            int trouve = 1;
            for(int j=0;j < strlen(tabMotATester[i]);j++) {

            if(tabMotATester[j]!=tabcaracterefich[i][k]) //si premiere lettre identique
              {
                  trouve = 0;
                  break;
              }
            }
            if(trouve) {
              printf("trouvé\n");
             count++;
            }
        }
         printf("Ligne %d trouvé %d fois\n", i,count);
    }


    fclose(fichier);
      return 0 ;  

}
