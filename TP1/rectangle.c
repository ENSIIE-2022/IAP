#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int n,i;
    if(argc != 2){
        printf("Usage %s <n>\n",argv[0]);
        return -1;
    }
    n = (int) strtol(argv[1],NULL,10);
    for(i = 0 ; i < n ;i++){
        printf("*");
    }
    printf("\n");
    for ( i = 0; i < n-2; i++)
    {
        printf("*");
        for (int j = 0; j < n-2; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i = 0 ; i < n ;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}