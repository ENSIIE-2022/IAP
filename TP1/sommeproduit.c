#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    int x,y,z;
    if(argc != 4){
        printf("Usage %s <x> <y> <z>\n  ",argv[0]);
        return -1;
    }
    x=(int)strtol(argv[1],NULL,10);
    y=(int)strtol(argv[2],NULL,10);
    z=(int)strtol(argv[3],NULL,10);
    printf("La somme de x,y et z est : %d\n",x+y+z);
    printf("La multiplication de x, y et z est : %d\n",y*x*z);
    return 0;
}