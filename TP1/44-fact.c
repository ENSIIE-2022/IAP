//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n == 1)
        return 1;
    else
        return fact(n-1) * n;
}

int main(int argc, char** argv){
    int n = atoi(argv[1]);
    if(argc != 2 || n <= 0){
        printf("Usage %s <nombre positif>\n",argv[0]);
        return -1;
    }
    printf("Factorielle de %d = %d", n, fact(n));
    return 0;
}

