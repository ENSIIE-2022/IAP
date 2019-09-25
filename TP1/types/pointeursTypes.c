//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int** doubleliste(int* l, int n){
    int** p;
    int* pair;
    int* impair;
    int i;
    int np=0,ni=0;

    pair = (int*) malloc(sizeof(int) *n);
    impair = (int*) malloc(sizeof(int) *n);
    for( i = 0 ; i < n ; i++ ){
        if(l[i]%2 == 0){
            pair[np] = l[i];
            np++;
        }else{  
            impair[ni] = l[i];
            ni++;
        }
    }
    p= (int**) malloc(sizeof(int*) * 2);
    p[0] = pair;
    p[1] = impair;
    return p;
}

void alea(int* tab, int n){
    int i;
    srand(time(NULL));
    for( i = 0 ; i < n ; i++ ){
        //+1 Pour éviter d'avoir un nombre = 0. Facilite la tâche pour l'affichage
        tab[i] = rand()%100000 +1;
    }
}

int main(void){
    int n = 50;
    int* l;
    int** p;
    l = (int*) malloc(sizeof(int) * n);
    alea(l,n);

    p = doubleliste(l,n);
    for(int i = 0 ; p[0][i]!=0 ; i++){
        printf("pair n°%d = %d\n",i+1,p[0][i]);
    }
    for(int i = 0 ; p[1][i]!=0 ; i++){
        printf("impair n°%d = %d\n",i+1,p[1][i]);
    }
    return 0;
}