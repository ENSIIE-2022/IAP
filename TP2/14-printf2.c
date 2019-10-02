//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void join(char *s, char *c){
    int j; 
    for (int i = 0 ; i < strlen(s) ; i++) {
        if ( strcmp(s[i],c) == 0 ) 
            s[i] = '\n';
    }
    return;
}

int main(int argc, char** argv){
    join(argv[2], argv[1]);
    printf("%s", argv[2]);
    putchar('\n');
    return 0;
}