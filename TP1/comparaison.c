#include<stdio.h>

int main(void){
    double x , y ;
    x = 1/34028234.0;
    y = ((1/34028234.0) + 3 ) - 3;
    if(abs(x - y) < 0.001){
        printf("Egaux donc x = %lf et y = %lf\n",x,y);
    }else{
        printf("Non egaux\n");
    }
    return 0;
}