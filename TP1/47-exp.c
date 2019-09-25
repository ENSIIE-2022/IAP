//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Non récursive
double f_exp(double x){
    double l=0;
    double i=1;
    if(x < 1 && x > 0){
        while( (pow(x,i)/i) >= 0.001){
            l = l + pow(x,i)/i;
            i++;
        }
    }else{
        printf("x n'est pas compris entre 0 et 1 !!!\n");
        return -1;
    }
    return l;
}

//Récursive
double f_exp2(double x, double i){
    if(pow(x,i)/i < 0.001){
        return 0;
    }else{
        return pow(x,i)/i + f_exp2(x,i+1); 
    }
    
}

int main(void){
    double x = 0.5;
    double res;
    double res2;
    if(x > 1 || x < 0 ){
        printf("x n'est pas compris entre 0 et 1 !!! \n");
        return -1;
    }
    res = f_exp(x);
    res2 = f_exp2(x,1);
    printf("Le résultat l = %lf\n",res);
    printf("Le résultat l2 = %lf\n",res2);
    return 0;
}