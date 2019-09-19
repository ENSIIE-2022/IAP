//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int r;
    if(argc != 2){
        printf("Usage %s <rayon>\n  ",argv[0]);
        return -1;
    }
    r=atoi(argv[1]);
    printf("Volume de la sphère de rayon %d = %f \n", r, ((double)4/3)*3.14*(r*r*r));
    return 0;
}