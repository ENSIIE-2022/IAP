#include<stdlib.h>
#include<stdio.h>

void f ( int x ) {
    x = 1;
}
void g ( int t []) {
    t [0] = 1;
}
int main ( void ) {
    int x = 3;
    f(x);
    int t [1];
    t [0] = 3;
    g(t);
    printf ( " %d \n " , x ) ;
    printf ( " %d \n " , t [0]) ;
    return 0;
}