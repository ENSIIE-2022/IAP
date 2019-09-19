//Théo SZATKOWSKI
#include<stdio.h>

int main(void){
    int m=2 , n=25 , log=0, init;
    init=n;
    while(n >= m){
        n = n/m;
        log++;
    }
    printf("Log de %d en base %d = %d\n",init,m,log);    
    return 0;
}