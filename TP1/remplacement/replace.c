//Théo 'Lako' SZATKOWSKI (sTheoz)
#include<stdio.h>
#include<stdlib.h>

void replace(char* s, char c, char d, int i){
    printf("Je suis %c à l'emplacement %d\n",s[i],i);
    if(s[i] == '\0'){
        return;
    }else if(s[i] == c){
        //Le remplacement ne fonctionne pas ?!?!?!
        *(s+i)=d;
        return replace(s,c,d,i+1);
    }
    else {
        return replace(s,c,d,i+1);
    }
}

int main(void){
    char* s = (char*) malloc(sizeof(char) * 68);
    s = "Je suis une phrase assez longue pour contenir pas mal de caractères.";
    char c = 'e';
    char d = 'z';
    int i=5;
    replace(s,c,d,i);
    printf("%s\n",s);
    return 0;
}