#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
/*
int verifNum(char* tab){
    int i = 0;
    printf("%s",tab[i]);
    while(tab[i] != "\0" ){
        printf("tab %d est %d\n",i,tab[i]);
        if(!isdigit(tab[i]))return 0;
        i++;
    }
    return 1;
}*/

int main(int argc, char** argv){
    int i,v,n=0,x;
    for(i = 1 ; i < argc ; i++){
        if(strcmp(argv[i], "-v") == 0 && v!=1){
            v=1;
        }else if( ( strcmp(argv[i], "-v" ) == 0 && v==1 ))
            fprintf(stderr, "Il ne faut qu'un argument à la fois\n");
        else if(strcmp(argv[i],"-x") == 0 && x!=1) {
            //Regarder si c'est un entier
            if(i+1 <= argc) {
                n = (int)strtol(argv[i+1],NULL,10);
                i++;
                x=1;
            }else{
                fprintf(stderr,"Après -x vous devez entrer un entier\n");
            }
        }else if(strcmp(argv[i],"-x") == 0 && x==1) {
            fprintf(stderr,"Un seul argument à la fois \n");
        }else if(strcmp(argv[i], "-h") == 0){
                printf("Voici le manuel\n");
                return 2;
            }
    }
    if(v == 1 && n!=0){
        printf("Voici un entier %d\n",n);
    } else if(x == 1){
        printf("%d\n",n);
    }
    return 1;
}