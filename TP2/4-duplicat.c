//Lucas NAVETEUR
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 10

int func(char *c, char*s, char*t){
    strcpy(c, s);
    strcat(c, t);
    return 0;
}

int main(int argc, char **argv){
    char *s = "Coucou je suis ";
    char *t = "Lucas Naveteur\n";
    char *c = (char *) malloc(1 + strlen(s)+ strlen(t) );
    func(c, s, t);
    printf("%s", c);
    return 0;
}

/*
Creer un programme duplicat.c qui contient une fonction prenant en entr´ee trois chaˆınes de
caract`eres c, s et t et modifie c pour qu’il contienne s puis t. Cr´eer ensuite une seconde fonction,
utilisant la premi`ere, prenant en entr´ee deux chaˆınes c et s et un entier n et modifie c pour qu’elle
contienne n fois de suite la chaˆıne s.
*/