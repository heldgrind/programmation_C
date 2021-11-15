#include <stdio.h>

/******* Nom du programme : bits  *********************************************************/

/* Consignes :

- Vérifie si les 4eme et 20eme bits de gauche sont 1
- Si les deux bits sont 1, il affiche 1 sinon 0

*****************************************************************************************************/

int main(){
    int  d = 0x1001; //0x73= 01110101 avec 1001 la valeur 4 et 20 sont a 1
    int masque = 0x1001;//0x24= 00100100 

    if (d&0x24 == 0x24){// on compare les deux valeurs dans un masque logique avec un & car 1 & 1 = 1 et donc nous pourrons savoir si les deux sont a un a cette posisition
        printf("la valeur est a 1 au 4ème et au 20 ème \n");
    }
    else{
        printf("tu as tout faux");
    }


    
}