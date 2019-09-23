//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int print_array(int size, int array[]){
    for(int i = 0; i < size; i++){
        printf("%d  ", array[i]);
    }
    putchar('\n');
}

int reverse_crush(int size, int array[]){
    int temp = 0;
    //size/2 sinon il inverse l'inversion !
    for(int i = 0; i < size/2; i++){
        temp = array[i];
        array[i] = array[size-i-1];
        array[size-i-1] = temp;
    }
    print_array(size, array);
}

int reverse_array(int size, int array_one[], int array_two[]){
    for(int i = 0; i < size; i++){
        array_two[i] = array_one[size-i-1];
    }
    print_array(size, array_two);
    return 0;
}

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
    int array_one[] = { 0, 1, 2, 3, 4, 5, 6 };
    int array_two[SIZE];
    int res = 0, value = 2;
    if( ( res = isIn(SIZE, array_one, value) ))
        printf("%d est à la %de position du tableau (En partant de 0)\n", value, res);
    else
        printf("%d n'est pas présent dans le tableau\n", value);
    //printf("Dichotomie donne : %d\n", dichotomie(SIZE, array_one, value));
    reverse_array(SIZE, array_one, array_two);
    reverse_crush(SIZE, array_one);
    return 0;
}