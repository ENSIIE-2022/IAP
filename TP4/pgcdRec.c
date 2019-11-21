//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int pgcdRec(int a, int b){
    if(a==b)
        return a;  
    if(a>b)
        return pgcdRec(a-b, b);
    else
        return pgcdRec(a, b-a);
}