#include<stdio.h>


/******* Nom du programme : ptrvariables.c  *********************************************************/

/* Consignes :

- Affecte et affiche la valeur des différents type de variable en utilisant leurs adresses

*****************************************************************************************************/

int main(){

    printf("rentrez un caractère");
    char caractere ='a';                 //initialisation du caractère
    scanf("%c",&caractere);              //recuperation de la valeur rentrée par l'user et stockage à l'adresse de caractère
    char *my_char_addr = &caractere;     // création du pointeur my_char_addr dont la valeur vaut l'adresse de la variable caractère
    printf("char = %c\n", *my_char_addr);  // on affiche la valeur contenu dans my_char_addr grâce à un pointeur
    printf("adresse char = %p\n", my_char_addr); // on affiche l'adresse de la valeur

    printf("rentrez un short");
    short  petit = 0;
    scanf("%hd",&petit);
    short *my_short_addr = &petit;
    printf("short = %hd\n", *my_short_addr);
    printf("adresse short = %p\n", my_short_addr);

    printf("rentrez un entier");
    int entier = 0;
    scanf("%d",&entier);
    int *my_int_addr = &entier;
    printf("short = %d\n", *my_int_addr);
    printf("adresse short = %p\n", my_int_addr);

    printf("rentrez un long entier");
    long int grand = 0;
    scanf("%ld",&grand);
    long int *my_grand_addr = &grand;
    printf("grand = %ld\n", *my_grand_addr);
    printf("adresse grand = %p\n", my_grand_addr);

    printf("rentrez un entier géant");
    long long int geant = 0;
    scanf("%lld",&geant);
    long long int *my_geant_addr = &geant;
    printf("geant = %lld\n", *my_geant_addr);
    printf("adresse geant = %p\n", my_geant_addr);

    printf("rentrez un chiffre a virgule");
    float virgule = 0;
    scanf("%f",&virgule);
    float *my_virgule_addr = &virgule;
    printf("geant = %f\n", *my_virgule_addr);
    printf("adresse geant = %p\n", my_virgule_addr);

    printf("rentrez grand chiffre a virgule");
    double grand_v= 0;
    scanf("%lf",&grand_v);
    double *my_grand_v_addr = &grand_v;
    printf("geant = %lf\n", *my_grand_v_addr);
    printf("adresse geant = %p\n", my_grand_v_addr);

    printf("rentrez géant a virgule");
    long double geant_v = 0;
    scanf("%Lf",&geant_v);
    long double *my_geant_v_addr = &geant_v;
    printf("geant = %Lf\n", *my_geant_v_addr);
    printf("adresse geant = %p\n", my_geant_v_addr);
}