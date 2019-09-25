//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* loglist(int n){
    float* p = (float*) malloc(n * sizeof(float));
    for(int i = 0 ; i < n ; i++){
        p[i] = log(i);
    }
    return p;
}

int main(int argc, char** argv){
    int n = 10;
    float *p = loglist(n);
    for(int i = 0 ; i < n ; i++){
        printf("p[%d] = %f\n", i, p[i]);
    }
    free(p);
    return 0;
}

