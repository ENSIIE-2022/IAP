//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int dicho(int min, int max, int array[], int x){
    int m=max+1 ; 
    if(array[m]==x) { 
        return m; 
    }else{
        if(x<array[m]) 
            return dicho(min, m-1, array, x); 
        else 
            return dicho(m+1, max, array, x); 
    }
    return 1;
}

int main(int argc, char** argv){
    int n = atoi(argv[1]);
    if(argc != 2 || n <= 0){
        printf("Usage %s <nombre positif>\n",argv[0]);
        return -1;
    }
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 19};
    printf("Factorielle de %d = %d", n, dicho(0, 9, array, 6));
    return 0;
}

