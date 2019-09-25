//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>


int* creation(){
    int* a;
    a = (int*) malloc(sizeof(int));
    *a = 0;
    return a;
}

void libere(int* a){
    free(a);
    return;
}

int main(void){
    int* a;
    a = creation();
    printf("a=%d\n",*a);
    libere(a);
    printf("a=%d\n",*a);
    return 0;
}