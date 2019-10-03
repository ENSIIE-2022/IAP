//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void join(char *s, char *c){
    char *buff = malloc(sizeof(char) * strlen(c));
    printf("Remove %s from %s\n", c, s);
    for(int i = 0; i < strlen(s); i++){
        //Si strcmp(c, s[i]+strlen(c) == 0)
            //C'est bon
    }
    return;
}

int main(int argc, char** argv){
    join(argv[2], argv[1]);
    printf("%s", argv[2]);
    putchar('\n');
    return 0;
}