//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdio.h>
#include<stdlib.h>

int dicho(int* tab, int min, int max, int x){
    printf("Où suis-je ? min=%d max=%d \n",min,max);
    if( x == tab[min] || x == tab[max]){
        return 1;
    }else if( max == min+1){
        return 0;
    } 
    else if( x < tab[min] || x > tab[max]){
        return 0;
    }else if(x <= tab[(min+max)/2]){
        return dicho(tab,min, (min+max)/2,x );
    }else 
    return dicho(tab, (min+max)/2 ,max,x);
}

int main(void){
    int x=150;
    int min=0;
    int max=16;
    int res;
    int tab[16]={1,15,16,18,20,25,26,90,150,200,220,230,450,550,900,1000};
    res = dicho(tab, min, max, x);
    if(res == 1){
        printf("x est présent dans le tableau\n");
    }else{
        printf("x n'est pas présent dans le tableau\n");
    }
    return 0;
}