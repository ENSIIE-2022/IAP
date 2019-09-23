//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
    int n;
    if(argc != 2){
        printf("Usage %s <n>\n  ",argv[0]);
        return -1;
    }
    n = strtod(argv[1], NULL);
    printf("%d*ln(%d) = %lf\n", n, n, n*log(n));
    return 0;
}