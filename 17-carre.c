//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int x, i, j;
    if(argc != 2){
        printf("Usage %s <valeur>\n  ",argv[0]);
        return -1;
    }
    x=atoi(argv[1]);
    for(i = 0; i < x; i++){
        if(i == 0 || i == x-1){
            for(j = 0; j < x; j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(j = 0; j < x-2; j++){
                printf(" ");
            }
            printf("*\n");
        }
    }
}