//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>

int facto(int n){
    if(n == 1){
        return 1;
    }else{
        return facto(n-1) * n;
    }
}

int main(int argc, char** argv){
    if(argc != 2){
        printf("Usage %s <nombre>\n",argv[0]);
        return 1;
    }
    int n;
    int res;
    n = (int) strtol(argv[1],NULL,NULL);
    if(n < 1){
        printf("Il faut que n > 0\n");
        return 2;
    }
    res = facto(n);
    printf("Le résultat de %d! est %d\n",n,res);
    return 0;
}