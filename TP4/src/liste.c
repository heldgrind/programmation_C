#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "liste.h"


int main(){
    /*  [{ef,00000ff,78,78}, []] */
    couleurs liste_couleur[2];
    liste_couleur[0].rouge= 0xef ;
    liste_couleur[0].bleu= 0x0000FF;
    liste_couleur[0].vert= 0x78;
    liste_couleur[0].alpha= 0x78;
    liste_couleur[0].suivant = NULL; 

    liste_couleur[1].rouge= 0xef ;
    liste_couleur[1].bleu= 0x0000FF;
    liste_couleur[1].vert= 0x78;
    liste_couleur[1].alpha= 0x78;

    parcours(&liste_couleur[0]);

    insertion(&liste_couleur[1], &liste_couleur[0]);

    parcours(&liste_couleur[0]); 

}


void insertion ( struct couleurs *nouveau, struct couleurs *head){
    while(head->suivant != NULL) {
        head = head->suivant;
    }
    nouveau->suivant = NULL;
    head->suivant = nouveau;
}
void parcours (struct couleurs *head){
    while(head->suivant != NULL) {
        printf("%2.2x%2.2x -", head->bleu, head->rouge);
        head = head->suivant;
    }
    printf("%2.2x%2.2x", head->bleu, head->rouge);
}
