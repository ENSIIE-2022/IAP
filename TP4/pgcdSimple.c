//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int pgcdSimple(int n, int m){
    int temp = 0;
    if(n > m){
        temp = n;
        n = m;
        m = temp;
    }else{
        for(int d = 1 ; d < n ; d++){
            if( (d%n == 1) && (d%m == 1) )
                return d;
        }
    }
    return 0;
}