//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* zero(){
    int *toto = (int*) malloc(sizeof(int));
    *toto = 0;
    return toto;
}

void free_pt(int* pt){
    free(pt);
    return;
}

int main(int argc, char** argv){
    int* var = zero();
    printf("var = %d\n", *var);
    free_pt(var);
    printf("var = %d\n", *var);
    return 0;
}

