#include<stdio.h>

int main(void){
    int i,i2=0,i3;
    for(i = 0 ; i2 < 1548; i++){
        i2 = (i+1)*(i+1)*(i+1);
        i3 = i*i*i;
        if(i3 <= 1548 && i2 >= 1548){
            printf("La solution à ce problème est %d\n",i);
            return 1;
        }       
    }
    printf("Nous n'avons pas trouvé de solution\n");    
    return 0;
}