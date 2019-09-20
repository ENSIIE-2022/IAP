//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int print_multiplication_table(int x){
    int cpt = 0;
    for(cpt = 0; cpt < 11; cpt++){
        printf("%d * %d = %d\n", x, cpt, x*cpt);
    }
    return 0;
}

int print_log(int x, int base){
    int log=0, init=x;
    while(x >= base){
        x = x/base;
        log++;
    }
    return log;
}

int main(int argc, char** argv){
    int x, base, i, j;
    if(argc != 3){
        printf("Usage %s <x1> <x2>\n  ",argv[0]);
        return -1;
    }
    x=atoi(argv[1]);
    base=atoi(argv[2]);
    print_multiplication_table(x);
    printf("Log de %d en base %d = %d\n", x, base, print_log(x, base));
}