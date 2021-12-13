#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include "repertoire.h"
#include <string.h>

int main(int argc, const char** argv){
    char nom_repertoire[80];
    strcpy(nom_repertoire, argv[1]);
    lire_dossier_recursif(nom_repertoire);
}

void lire_dossier(char *nom_repertoire){
    DIR* dir=opendir(nom_repertoire);
    if(dir == NULL){
        printf("le répertoire n'existe pas");
    }

    struct dirent* entity;
    entity = readdir(dir);
    while(entity != NULL){
        printf(" %hhd %s\n", entity->d_type ,entity -> d_name);
        entity = readdir(dir);
    }
    closedir(dir);

    
}

void lire_dossier_recursif(char *nom_repertoire){
    DIR* dir=opendir(nom_repertoire);
    if(dir == NULL){
        printf("le répertoire n'existe pas");
    }
    printf("lecture des fichiers dans : %s",nom_repertoire);
    struct dirent* entity;
    entity = readdir(dir);
    while(entity != NULL){
        printf(" %hhd %s\n", entity->d_type ,entity -> d_name);

        if (entity ->d_type == DT_DIR && strcmp(entity -> d_name, ".") !=0 &&  strcmp(entity -> d_name, "..") !=0){
            char path[100]= {0};
            strcat(path, nom_repertoire);
            strcat(path, "/");
            strcat(path, entity ->d_name);
            lire_dossier_recursif(path);
        }
        entity = readdir(dir);
    }
    closedir(dir);

    void lire_dossier_iteratif(char *nom_repertoire){
        
    }

}