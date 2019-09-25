//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Compilation avec l'argument -lm avec gcc

float* loglist(int n){
    int i;
    float* p = (float*) malloc(n * sizeof(float));
    for(i = 0 ; i < n ; i++){
        p[i] = log(i);
    }
    return p;
}

int main(void){
    int n = 8;
    float* p = loglist(n);
    int i;
    for( i = 0 ; i < n ; i++){
        printf("p[%d] = %lf\n", i, p[i]);
    }
    return 0;
}