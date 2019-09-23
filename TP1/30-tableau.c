//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

//C'est pas vraiment ca, normalement faut donner un intervalle je crois pour les 2 return dichotomie, entre 0 et half, et entre half et size
int dichotomie(int size, int array[], int m){
    int half = size/2;
    if(array[half] == m)
        return half;
    else if(array[half] > m)
        return dichotomie(half, array, m);
    else
        return dichotomie(half, array, m);
}

int isIn(int size, int array[], int m){
    for(int i = 0; i < size; i++){
        if(array[i] == m)
            return i;
    }
    return 0;
}

int main(int argc, char** argv){
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };
    int res = 0, value = 2;
    if( ( res = isIn(SIZE, array, value) ))
        printf("%d est à la %de position du tableau (En partant de 0)\n", value, res);
    else
        printf("%d n'est pas présent dans le tableau\n", value);
    printf("Dichotomie donne : %d\n", dichotomie(SIZE, array, value));
    return 0;
}