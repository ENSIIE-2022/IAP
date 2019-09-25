//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

void swap(int n, int tab[], int* min, int* max){
    for(int i = 0; i < n; i++){
        tab[i] = i*i*i;
        printf("%d - ", tab[i]);
        if(tab[i] < *min)
            *min = tab[i];
        if(tab[i] > *max)
            *max = tab[i];
    }
    putchar('\n');
    return;
}

int main(int argc, char** argv){
    int n = 5;
    int *min = (int *) malloc(sizeof(int));
    int *max = (int *) malloc(sizeof(int));
    int *tab = (int *) malloc(n * sizeof(int));
    swap(n, tab, min, max);
    printf("max = %d / min = %d\n", *max, *min);
    return 0;
}

