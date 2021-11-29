#include <stdio.h>
#include <stdlib.h>
// short, int, long int, float, double et long double

int main(){
char entier = sizeof(int);
char *entier_octet=&entier;
printf("la valeur entier est %d\n",*entier_octet);

char sh = sizeof(short);
char *sh_octet=&sh;
printf("la valeur short est %d\n",*sh_octet);

char longint = sizeof(long int);
char *longint_octet=&longint;
printf("la valeur long int est %d\n",*longint_octet);

char flo = sizeof(float);
char *flo_octet=&flo;
printf("la valeur float est %d\n",*flo_octet);

char dou = sizeof(double);
char *dou_octet=&dou;
printf("la valeur double est %d\n",*dou_octet);

char lgd = sizeof(long double);
char *lgd_octet=&lgd;
printf("la valeur  long double est %d\n",*lgd_octet);

}