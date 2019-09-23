//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int isIn(int size, int array[], int m){
    for(int i = 0; i < size; i++){
        if(array[i] == m)
            return i;
    }
    return 0;
}

int main(int argc, char** argv){
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };
    int res = 0, value = 5;
    if( ( res = isIn(SIZE, array, value) ))
        printf("%d est à la %de position du tableau (En partant de 0)\n", value, res);
    else
        printf("%d n'est pas présent dans le tableau\n", value);
    return 0;
}