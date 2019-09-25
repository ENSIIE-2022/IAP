//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdio.h>
#include<stdlib.h>

struct date
{
    int j;
    int m;
    int a;
};

//Affiche la date
int affiche(struct date a){
    if(a.j > 31 || a.m > 12){
        fprintf(stderr,"Il n'y a que 31 jours max et 12 mois dans une année !\n");
        return 1;
    }
    printf("Nous sommes le %.2d/%.2d/%.4d\n",a.j,a.m,a.a);
    return 0;
}

//Met à jour la date avec le lendemain
int incremente(struct date* d){ 
    if(d->j == 31){
        d->j = 1;
        if(d->m == 12)d->m=1;
        else d->m=d->m + 1;
    }
    else if( d->j == 30 && (d->m == 4 || d->m == 6 || d->m == 9 || d->m == 11)){
        d->j = 1;
        if(d->m == 12)d->m=1;
        else d->m=d->m + 1;
    }else if (d->m == 2 && d->j == 28){
        d->j = 1;
        d->m=d->m+1;
    }else{
        d->j = d->j + 1;
    }
    
    return 0;
}

//On change la date à la main dans le main
int main(void){
    struct date a;
    a.j=32;
    a.m=8;
    a.a=2019;
    if ( affiche(a) == 1 )return 1;
    incremente(&a) == 1;
    if  ( affiche(a) == 1 )return 1;
    return 0; 
}