#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define X 10
#define Y 10

struct hero{
    int xp;
    int pv;
    int atk;
};

struct monstre{
    int pv;
    int atk;
};

struct type{
    char type;
};

void setGame(){
    
}

int main(void){
    int i, j;
    struct type current_case;
    struct type game[X][Y];
    int element;
    srand(time (NULL));
    for(i = 0; i < X; i++){
        putchar('\n');
        for(j = 0; j < Y; j++){
            element = rand()%3;
            switch(element){
                case 0:
                    current_case.type = '~';
                    game[i][j] = current_case;
                    break;
                case 1:
                    current_case.type = 'T';
                    game[i][j] = current_case;
                    break;
                case 2:
                    current_case.type = ',';
                    game[i][j] = current_case;
                    break;
            }
            printf("%c ", game[i][j].type);
        }
    }
    putchar('\n');

}