//Lucas NAVETEUR
#include <stdlib.h>
#include <stdio.h>

#define SIZE 10

int search_element(int size, int tab[], int m){
    for(int i = 0; i < size; i++){
        if(tab[i] == m)
            return 1;
    }
    return 0;
}

int main(int argc, char **argv){
    int myArray[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element;
    if(argc != 2){
        fprintf(stderr, "Usage : %s <element>\n", argv[0]);
        return 1;
    }
    element = (int) strtol(argv[1], NULL, 10);
    if(search_element(SIZE, myArray, element)){
        printf("%d est dans le tableau\n", element);
    }else{
        printf("%d n'est pas dans le tableau\n", element);
    }
}