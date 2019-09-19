//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int x, cpt = 0;
    if(argc != 2){
        printf("Usage %s <valeur>\n  ",argv[0]);
        return -1;
    }
    x=atoi(argv[1]);
    for(cpt = 0; cpt < 11; cpt++){
        printf("%d * %d = %d\n", x, cpt, x*cpt);
    }
    return 0;
}