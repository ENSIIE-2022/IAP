//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int x=0, z=0;
    printf("x = ");
    scanf("%d", &x);
    printf("z = ");
    scanf("%d", &z);
    if(z == 0){
        fprintf(stderr, "z ne peut pas valoir 0\n");
        return -1;
    }
    printf("Somme : %d / Produit : %d / Différence : %d / Rapport : %d\n", x+z, x*z, x-z, x/z);
    return 0;
}