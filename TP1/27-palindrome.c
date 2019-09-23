//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//NON FONCTIONNEL

char* strrev(char *s){
    char *s2 = malloc(strlen(s) + 1);
    for(int i = 0; i < strlen(s); i++){
        s2[i] = s[strlen(s)-i];
        printf("£££ %c £££\n", s[strlen(s)-i]);
    }
        printf("$$$ %s $$$\n", s2);
    free(s2);
        printf("$$$ %s $$$\n", s2);
    return s2;
}

int isPalindrome(char* s){
    if( strcmp(s, strrev(s)) == 0)
        return 1;
    else
        return 0;
}

char* doPalindrome(char* s1){
    char *s2 = malloc((strlen(s1)*2) + 1);
    strcpy(s2, s1);
    strcpy(s2, "chaine inversée");
    return s2;
}

int main(int argc, char** argv){
    char* string = "wow";
    printf("-- %s --\n", strrev(string));
    if(isPalindrome(string))
        printf("C'est un palindrome !\n");
    else
        printf("Ce n'est pas un palindrome !\n");
    printf("Le palindrome est %s\n", doPalindrome(string));
    return 0;
}