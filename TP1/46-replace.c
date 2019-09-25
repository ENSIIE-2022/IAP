//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdio.h>
#include<stdlib.h>

void replace(char s[], int i, char c, char d){
    //printf("s[%d] = %c\n", i, s[i]);
    if(s[i] == '\0'){
        return;
    }else if(s[i] == c){
        *(s+i) = d;
        return replace(s,c,d,i+1);
    }
    else {
        return replace(s,c,d,i+1);
    }
}

int main(void){
    int start = 5;
    char s[150] = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    char c = 'e', d = 'z';
    printf("%s\n",s);
    replace(s, start, c, d);
    printf("%s\n",s);
    return 0;
}