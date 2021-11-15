#include<stdio.h>



/******* Nom du programme : variables.c  *********************************************************/

/* Consignes :

- Affecte et affiche les valeurs des variables des différents types de base

*****************************************************************************************************/
int main(){
    printf("rentrez un caractère");     // Affichage du texte à l'utilisateur
    char caractere ='a';                // Initialisation du caractère
    scanf("%c",&caractere);             // Récupération de la valeur et stockage à l'adresse  &caractere

    printf("rentrez un short");
    short  petit = 0;
    scanf("%hd",&petit);

    printf("rentrez un entier");
    int entier = 0;
    scanf("%d",&entier);

    printf("rentrez un long entier");
    long int grand = 0;
    scanf("%ld",&grand);

    printf("rentrez un entier géant");
    long long int geant = 0;
    scanf("%lld",&geant);

    printf("rentrez un chiffre a virgule");
    float virgule = 0;
    scanf("%f",&virgule);

    printf("rentrez grand chiffre a virgule");
    double grand_v= 0;
    scanf("%lf",&grand_v);

    printf("rentrez géant a virgule");
    long double geant_v = 0;
    scanf("%Lf",&geant_v);

    // Affichage des différentes valeurs
    printf("char = %c\n short = %hd\n int = %d\n long int = %ld\n long long int = %lld\n float = %f\n double = %lf\n, long double = %Lf\n"
    ,caractere,petit,entier,grand,geant,virgule,grand_v,geant_v);

}
