//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char* concat(char *s1, char *s2){
    char *result;
    if( (result = malloc(strlen(s1) + strlen(s2) + 1)) == NULL )
        return NULL;
    strcpy(result, s1);
    strcat(result, " ");
    strcat(result, s2);
    return result;
}

char* concatx(char *s, int n){
    for(int i =0; i < n; i++){
        s = concat(s,s);
    }
    return s;
}

int main(int argc, char** argv){
    int n=0;
    char *sr;
    if(argc != 4){
        printf("Usage %s <w1> <w2> <n>\n  ",argv[0]);
        return -1;
    }
    n = atoi(argv[3]);
    if ( (sr = concat(argv[1], argv[2]) )== NULL ){
        perror("concat returned NULL");
        return -1;
    }
    printf("La concaténation des 2 chaines donne ! %s\n", sr);
    printf("La concaténation de %d fois la chaine %s donne : %s\n", n, argv[1], concatx(argv[1], n));
    free(sr);
    return 0;
}