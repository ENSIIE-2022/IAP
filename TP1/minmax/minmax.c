//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void alea(int* tab, int n){
    int i;
    srand(time(NULL));
    for( i = 0 ; i < n ; i++ ){
        tab[i] = rand()%100000;
    }
}

void recherche(int n, int* tab, int* min, int* max){
    int i;
    *min = tab[0];
    *max = tab[0];
    for(i = 1 ; i < n ; i++){
        if( tab[i] < *min )*min = tab[i];
        if( tab[i] > *max )*max = tab[i];
    }
}

int main(void){
    int n;
    int* min;
    int* max;
    int* tab;
    //Initialisation de n
    n = 15;
    //Il faut que n>0
    //Allocation des ressources
    tab = (int*) malloc(n * sizeof(int));

    max = (int*) malloc(sizeof(int));
    min = (int*) malloc(sizeof(int));
    //Remplissage du tableau
    alea(tab,n);
    //Recherche du min et du max
    recherche(n, tab, min, max);
    printf("Le min est : %d et le max est : %d\n",*min, *max);
    free(min);
    free(max);
    free(tab);
    return 0;
}