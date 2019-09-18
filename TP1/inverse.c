#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int a;
    if(argc != 2){
        printf("Usage %s <a>\n  ",argv[0]);
        return -1;
    }
    a=(int)strtol(argv[1],NULL,10);
    if( a < 1 ){
        printf("Nous voulons a > 1\n");
        return -2;
    }
    printf("L'inverse de a est : %lf\n",(double) 1.0/(double)a);
    return 0;
}