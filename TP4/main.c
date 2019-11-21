//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include "pgcd.h"



int main(int argc, char** argv){
    int entier = 0;
    printf("Rentrez le nombre entier : ");
    scanf("%d", &entier);
    pgcd(entier);
    return 0;
}