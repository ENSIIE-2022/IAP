//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int adress(int* a, int* b, int* c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
    return 0;
}

int main(int argc, char** argv){
    int a,b,c;
    if(argc != 4){
        printf("Usage %s <a> <b> <c>\n  ",argv[0]);
        return -1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    printf("a = %d / b = %d / c = %d\n", a, b, c);
    adress(&a, &b, &c);
    printf("a = %d / b = %d / c = %d\n", a, b, c);
    return 0;
}

