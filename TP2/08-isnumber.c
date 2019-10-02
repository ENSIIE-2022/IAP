//Lucas NAVETEUR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isNumber(char* string){
    for(int i = 0; i < strlen(string); i++){
        if(!isdigit(string[i]))
            return 0;
    }
    return 1;
}

int main(int argc, char** argv){
    char* string = "123456789";
    if(isNumber(string))
        printf("La chaine est constituée que de chiffres\n");
    else
        printf("La chaine n'est pas constituée que de chiffres\n");
    return 0;
}