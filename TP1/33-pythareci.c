//Lucas NAVETEUR
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv){
    char *endptr;
    int a,b,c,test;
    if(argc != 4){
        printf("Usage %s <a> <b> <c>\n  ",argv[0]);
        return -1;
    }
    a = strtol(argv[1], &endptr, test);
    b = strtol(argv[2], &endptr, test);
    c = strtol(argv[3], &endptr, test);
    printf("%d - %d - %d\n", a, b, c);
    if(!isdigit(a) || !isdigit(b) || !isdigit(c)){
        fprintf(stderr, "%d - %d - %d\n", isdigit(a), isdigit(b), isdigit(c));
        return -1;
    }
    if( ((a*a) == (b*b)+(c*c)) || ((b*b) == (a*a)+(c*c)) || ((c*c) == (b*b)+(a*a)))
        printf("Ce triangle est rectangle");
    else
        printf("Ce triangle n'est pas rectangle");
    return 0;
}
*/