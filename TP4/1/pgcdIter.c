//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int pgcdIter(int n, int m){
    int temp = 0;
    while(n != m){
        if(m < n){
            temp = n;
            n = m;
            m = temp;
        }
        m = m-n;
    }
    return n;
}