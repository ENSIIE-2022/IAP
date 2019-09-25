//Théo 'Lako' SZATKOWSKI (sTheoz)
#include <stdio.h>
#include <stdlib.h>

char* hello() {
    char* px = "hello";
    return px;
}

int main ( void ) {
    char * s = hello();
    printf ("%s\n", s );
    //Il n'y a pas eu de réservation de mémoire avec malloc donc pas besoin de faire un free
    //free(s);
    return 0;
}