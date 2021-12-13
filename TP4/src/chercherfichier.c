#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

void lire_fichier(char *nom_de_fichier){
    FILE* fichier = NULL;
    char c;
    fichier =fopen(nom_de_fichier,"r");
    if (fichier == NULL){
        printf("erreur ouverture");
    }
        while((c=fgetc(fichier))!=EOF){
        printf("%c",c);
    }

    fclose(fichier);
}


int main(int argc, char** argv)
{

    FILE* fichier = NULL;
    char c;
    int nb_ligne_fich =0;
    int j=0;
    char tabcaracterefich[400][400];
    char tabcaractere[100] ;
    int nbcaracparligne[100] ;
    char tabchaine[100] ;
    

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
                tabcaracterefich[j][nb_ligne_fich]= c; // CHIANT: je rempli des caracteres faudrait que je concatene deux chaines plutot, l'idée est de dire qu'a l'indice je met un mot, la ou pour le moment je rentre qu'un caractère et incremente j
                 j++;
              }
            }
    }

    //********Parcours du tableau a deux dimensions précédemment rempli et comparaison au mot clé**************//
    for (int i=0; i<nb_ligne_fich;i++)
    {
        printf("%d\n",nbcaracparligne[i]);
        for(int k=0;k<nbcaracparligne[i];k++)
        {
            // parcours de tout les mots du tableau, si la longueur est la meme que  argv[1] on test le mot
            // si égale, on incrément un compteur "trouvé"
            
            printf("%c",tabcaracterefich[k][i]);
        }

        // si "trouvé" print f("Ligne"%d",%d" fois\n" compteur,nb_ligne_fich)
        // sinon RIEN

    }
      /*   printf("%c",tabcaracterefich[0][0]);
         printf("%c",tabcaracterefich[1][0]);
         printf("%c",tabcaracterefich[2][0]);
         printf("%c\n",tabcaracterefich[3][0]);
         printf("%c",tabcaracterefich[1][1]);
         printf("%c",tabcaracterefich[2][1]);
         printf("%c",tabcaracterefich[3][1]);
         printf("%c",tabcaracterefich[4][1]);
         printf("%c",tabcaracterefich[5][1]);
         printf("%c",tabcaracterefich[6][1]);*/

    fclose(fichier);
      return 0 ;  

}
