//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int x;
    if(argc != 2){
        printf("Usage %s <entier>\n  ", argv[0]);
        return -1;
    }
    x = atoi(argv[1]);
    if(x >= 0){
        printf("%d est POSITIF\n", x);
    }else{
        printf("%d est NEGATIF\n", x);
    }
    return 0;
}