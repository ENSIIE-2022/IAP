//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(char **argv){
    
}

int main(int argc, char** argv){
    for(int i = 2; i < argc-1; i++){
        printf("%s", argv[i]);
        printf("%s", argv[1]);
    }
    printf("%s", argv[argc-1]);
    putchar('\n');

}

/*
Ecrire un programme join.c qui prend en entrée c > 1 arguments
et crée et affiche une chaı̂ne de caractère. Cette chaı̂ne contient dans l’ordre tous les arguments
exceptés le premier, et ce premier argument est inséré entre chaque paire d’arguments.

machin :~ ./join -- abc youpi 42 trololo
abc--youpi--42--trololo
*/