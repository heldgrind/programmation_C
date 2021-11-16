#include <stdio.h>
#include <stdlib.h>
int main(){
int int_1,int_2,int_3,char_1,char_2,char_3,float_1,float_2,float_3;
int_1=sizeof (int);
int_2=sizeof (int *);
int_3=sizeof (int **);
char_1=sizeof (char *);
char_2=sizeof (char**);
char_3=sizeof (char ***);
float_1=sizeof (float *);
float_2=sizeof (float **);
float_3=sizeof (float ***);

printf("int * = %d, int ** = %d,int *** = %d,char * =%d , char ** = %d, char *** =%d , float * = %d,float **%d , float *** =%d ",int_1,int_2,int_3,char_1,char_2,char_3,float_1,float_2,float_3);

}