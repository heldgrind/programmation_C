#include <stdio.h>
/******* Nom du programme : chaine.c  *********************************************************/

/* Consignes :

- calcule le nombre de caractères dans une chaine de caractères
- copie une chaine de caractères dans une autre chaine de caractère
- concatène deux chaines de caractères

*****************************************************************************************************/


int main()
{

printf("rentrez une chaine de caractère :");
    char machaine[100];
    char copie[100];
    char concatener[200];
    int i=0;
    int j=0;
    scanf("%s",machaine); // demande de rentrer une chaîne de caractère
    for(i=0;machaine[i];i++); // ici nous parconrons toute la chaine avec le compteur i 
    printf("la taille de la chaine est %d \n",i);
    for(i=0;machaine[i] != '\0'; i++){
        copie[i]=machaine[i];
    }
    printf("la chaine de caractere copie est %s \n",copie);

    for(i=0;machaine[i]!='\0';i++); // cette boucle permet d'aller au bout de la première chaîne
    for(j=0;copie[j]!='\0';j++,i++){ // enfin avec celle ci nous ajoutons la dernière chaîne à la suite
        machaine[i]=copie[j];
    }
    
    printf("la chaine concatenée est %s \n",machaine);
    


}

/*
#### Exercice 2.4 [★★]


Sans utiliser les bibliothèques standards ou externes (par exemple
string.h), écrivez le code *chaine.c* qui

1.  calcule le nombre de caractères dans une chaine de caractères
2.  copie une chaine de caractères dans une autre chaine de caractère
3.  concatène deux chaines de caractères
*/

