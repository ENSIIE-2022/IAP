//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>

int pgcd(int n){
    int i, flag = 0;
    for(i = 2; i <= n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if (n == 1) {
        printf("1 n'est rien\n");
    }else {
        if (flag == 0)
            printf("%d est un nombre premier\n", n);
        else
            printf("%d n'est pas un nombre premier\n", n);
    }   
    return 0;
}