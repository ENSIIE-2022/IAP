//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct vector {
    //length of vector
    unsigned long n;
    //pointer to array of length n   
    int *v;
} vector_t;

vector_t* initialize_vector(vector_t *vecteur){
    vecteur->v = (int *)malloc(sizeof(int)*vecteur->n);
    for(int i = 0; i < vecteur->n; i++)
        vecteur->v[i] = 0;
    return vecteur;
}

void increase_dimension(vector_t *vecteur, int quantity){
    vecteur->v = realloc(vecteur->v, sizeof(int)*(vecteur->n+quantity));
    for(int i = vecteur->n; i < vecteur->n+quantity; i++)
        vecteur->v[i] = 0;
    vecteur->n += quantity;
}

void change_coord(vector_t *vecteur, int position, int value){
    if(position > vecteur->n)
        increase_dimension(vecteur, position-(vecteur->n));
    vecteur->v[position] = value;
}

void print_vector(vector_t *vecteur){
    for(int i = 0; i < vecteur->n; i++)
        printf("v[%d] = %d\n", i, vecteur->v[i]);
}

double return_norm(vector_t *vecteur){
    //Racine(arg²+arg²+arg²+...)
    int res = 0;
    for(int i = 0; i < vecteur->n; i++){
        res += vecteur->v[i]*vecteur->v[i];
    }
    return sqrt(res);
}

//Normaliser un vecteur

vector_t copy_vector(vector_t *vecteur){
    vector_t new_vecteur;
    new_vecteur.n = vecteur->n;
    new_vecteur.v = (int *)malloc(sizeof(int)*vecteur->n);
    for(int i = 0; i < vecteur->n; i++)
        new_vecteur.v[i] = vecteur->v[i];
    return new_vecteur;
}

void sum_vector(vector_t *v1, vector_t *v2){
    if(v1->n > v2->n)
        increase_dimension(v2, (v1->n-v2->n));
    else if(v1->n < v2->n)
        increase_dimension(v1, (v2->n-v1->n));
    //Faire la somme des vecteurs
}

int main(int argc, char** argv){

    return 0;
}

