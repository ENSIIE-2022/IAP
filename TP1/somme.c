#include<stdio.h>

int main(void){
    int n=11 , i, somme=0;
    for(i = 0 ; i <= n ; i++){
        somme += i;
    }
    printf("La somme des chiffres allant de 1 à %d est %d\n",n, somme);    
    return 0;
}