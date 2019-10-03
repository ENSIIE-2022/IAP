//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int** func(int n, int *l){
    int **p;
    int* pair;
    int* impair;
    int cpt_p = 0, cpt_i = 0;
    p= (int**) malloc(sizeof(int*) * 2);
    pair = (int*) malloc(sizeof(int) *n);
    impair = (int*) malloc(sizeof(int) *n);
    for(int i = 0; i < n; i++){
        if(l[i]%2 == 0){
            pair[cpt_p] = l[i];
            cpt_p++;
        }else{  
            impair[cpt_i] = l[i];
            cpt_i++;
        }
    }
    p[0] = pair;
    p[1] = impair;
    free(pair);
    free(impair);
    return p;
}

int main(int argc, char** argv){
    srand(time(NULL));
    int n = 10;
    int *l = (int*) malloc(sizeof(int) * n);
    int **p = (int**) malloc(sizeof(int) * 2);
    for(int i = 0 ; i < n ; i++ ){
        l[i] = rand()%100;
    }
    p = func(n, l);
    for(int i = 0; i < n; i++){
        printf("p[0][%d] = %d\n", i, p[0][i]);
    }
    for(int i = 0; i < n; i++){
        printf("p[1][%d] = %d\n", i, p[1][i]);
    }
    free(p);
    return 0;
}

