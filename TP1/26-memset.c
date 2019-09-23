//Lucas NAVETEUR
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv){
    char s1[10];
    memset(&s1, '\0', sizeof(s1) );
    s1[0] = 'a';
    s1[1] = 'b';
    s1[2] = 'c';
    s1[3] = 'd';
    printf("%s\n", s1);
    return 0;
}

//On a des restes de mémoire d'une ancienne attribution (Potentiellement faite par l'OS lui-même, pas nos programmes), la solution est de memset l'espace pris par le tableau avec des \0;