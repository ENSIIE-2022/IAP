//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include "pgcdSimple.h"
#include "pgcdRec.h"



int main(int argc, char** argv){
    int n = 0, m = 0, res = 0;
    printf("Rentrez les 2 nombre entiers : ");
    scanf("%d %d", &n, &m);
    printf("PGCD-nor = %d\n", pgcdSimple(n, m));
    printf("PGCD-rec = %d\n", pgcdRec(n, m));   
    return 0;
}