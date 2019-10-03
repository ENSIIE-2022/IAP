//Lucas NAVETEUR
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int print_while(char* s){
    int i = 0;
    while(i != strlen(s)){
        printf("%c\n", s[i]);
        i++;
    }
    return 0;
}

int print(char* s){
    for(int i = 0; i < strlen(s); i++){
        printf("%c\n", s[i]);
    }
    return 0;
}

int main(int argc, char** argv){
    char *string = "Subscribe to PewDiePie";
    print(string);
    printf("---------------------------------\n");
    print_while(string);
    return 0;
}