#include <stdio.h>

int main(){
    printf("rentrez une longueur");
    int ligne = 0;
    int a = 0;
    int i;
    
    scanf("%d",&ligne); //ici on rentre la longueur de la boucl
    for(a=0; a<=ligne; a++){ //on descend sur l'axe Y
        for(i=0;i<=a;i++){ //on rajoute sur l"axe X pour fair un triangle
            printf("*");
        }
        printf("\n");

    }
}