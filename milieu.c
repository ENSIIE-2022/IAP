#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
    double x1,x2,y1,y2;
    if(argc != 5){
        printf("Usage %s <x1> <x2> <y1> <y2>\n  ",argv[0]);
        return -1;
    }
    x1=(int)strtod(argv[1],NULL);
    x2=(int)strtod(argv[2],NULL);
    y1=(int)strtod(argv[3],NULL);
    y2=(int)strtod(argv[4],NULL);
    printf("Milieu de point de p1 et p2 : (%.2lf , %.2lf)\n",(x1+x2)/2,(y1+y2)/2);
    return 0;
}