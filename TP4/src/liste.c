#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "liste.h"


int main(){
    /*  [{ef,00000ff,78,78}, []] */
    couleurs liste_couleur[2]; //on crée un tableau de 2 couleurs
    liste_couleur[0].rouge= 0xef ;
    liste_couleur[0].bleu= 0x0000FF;
    liste_couleur[0].vert= 0x78;
    liste_couleur[0].alpha= 0x78;
    liste_couleur[0].suivant = NULL; 

    liste_couleur[1].rouge= 0xef ;
    liste_couleur[1].bleu= 0x0000FF;
    liste_couleur[1].vert= 0x78;
    liste_couleur[1].alpha= 0x78;

    parcours(&liste_couleur[0]);// ici on rentre la valeur du début de la liste

    insertion(&liste_couleur[1], &liste_couleur[0]); // ici on rajoute la couleur que l'on veut rajouter en partant dans la tête qui correspond a liste_couleur[0]

    parcours(&liste_couleur[0]);// on parcours pour voir le changement une fois la liste rajouté

}


void insertion ( struct couleurs *nouveau, struct couleurs *head){
    while(head->suivant != NULL) { //si l'adresse de la chaine suivante amlors notrevaleur de tête prend la valeur suivante
        head = head->suivant;
    }
    nouveau->suivant = NULL; //on initie nouveau a NULL
    head->suivant = nouveau; // head prend alors la valeur de suivant qui correspond a la chaine que l'on ajoute
}
void parcours (struct couleurs *head){
    while(head->suivant != NULL) {
        printf("%2.2x%2.2x -", head->bleu, head->rouge); //on affiche les première valeurs
        head = head->suivant; //on passe au suivant
    }
    printf("%2.2x%2.2x", head->bleu, head->rouge);
}
