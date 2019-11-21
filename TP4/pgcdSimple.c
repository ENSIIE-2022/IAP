//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int pgcdSimple(int n, int m){
    int reste = 1;
    while (reste!=0){
        reste=n%m;
        n=m;
        m=reste;
    }
    return n;
}