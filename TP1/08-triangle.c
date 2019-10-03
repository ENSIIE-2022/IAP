//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int a,b;
    if(argc != 3){
        printf("Usage %s <a> <b>\n  ",argv[0]);
        return -1;
    }
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    printf("Carré de l'hypothénuse = %d\n",(a*a)+(b*b));
    return 0;
}