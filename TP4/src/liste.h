typedef struct couleurs {  
 int rouge ;  
 int vert ;
 int bleu ;
 int alpha ;
 struct couleurs *suivant;
}couleurs;               
void insertion ( struct couleurs *nouveau, struct couleurs *head);                 
void parcours (struct couleurs *head);