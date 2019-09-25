//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>

void echange(int* a, int* b, int* c){
    int t1,t2;
    t1=*a;
    //On affecte la valeur de c à l'adresse de a.
    *a = *c;
    *c = *b;
    *b = t1;
    return;
}

int main(void){
    int a=1,b=2,c=3;
    printf("a=%d b=%d c=%d\n",a,b,c);
    echange(&a,&b,&c);
    printf("a=%d b=%d c=%d\n",a,b,c);
    return 0;
}