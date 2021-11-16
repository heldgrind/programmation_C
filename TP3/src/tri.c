#include <stdio.h>
#include <stdlib.h>

int main(){
    int tableau[100];
    int i,perm,j;
    for (i = 0 ; i < sizeof(tableau)/sizeof(*tableau) ; i++)
    {
    *(tableau+i) = rand() % (400 + 1);
     printf("Entier :%d\n", tableau[i]);       // affichage des entiers du tableau
    }
    for(i=0;i<=100;i++){
        for(j=0;j<=100;j++){
            if(tableau[j]>tableau[j+1]){
                perm=tableau[j];
                tableau[j]=tableau[j+1];
                tableau[j+1]=perm;
            }
        }

    } 
    printf("affichage après le trie");
    for (i = 0 ; i < sizeof(tableau)/sizeof(*tableau) ; i++){
         printf("Entier :%d\n", tableau[i]); 
    }   
}