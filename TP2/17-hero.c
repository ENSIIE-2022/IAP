//Lucas NAVETEUR
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define X 10
#define Y 10

struct hero{
    int xp;
    int pv;
    int atk;
    int x;
    int y;
};

struct monstre{
    int pv;
    int atk;
    int x;
    int y;
};

struct territoire{
    char type;
    int hasPlayer;
    int hasMonster;
};

char getCaseType(struct territoire game[X][Y], int x, int y){
    return game[x][y].type;
}

void moveHero(struct hero myHero){
    char mouvement;
    printf("Quel mouvement pour notre Héro ?\n");
    printf("\tZ : Avancer\n");
    printf("\tQ : Aller à gauche\n");
    printf("\tS : Reculer\n");
    printf("\tD : Aller à droite\n");
    printf("\tX : Ne pas bouger\n");
    scanf("%c", &mouvement);
    switch(mouvement){
        case 'Z':
            printf("\tLe héro avance !\n");
            break;
        case 'Q':
            printf("\tLe héro va à gauche !\n");
            break;
        case 'S':
            printf("\tLe héro recule !\n");
            break;
        case 'D':
            printf("\tLe héro va à droite !\n");
            break;
        case 'X':
            printf("\tLe héro ne bouge pas !\n");
            break;
        default:
            printf("Mouvement non reconnu, on ne fait rien\n");
            //Même comportement que X
    }
    //Si la case destinatrice est de l'eau, return 1 (pb)

}

void printHeroPosition(struct territoire game[X][Y], int x, int y){
    int i, j;
    for(i = 0; i < X; i++){
        putchar('\n');
        for(j = 0; j < Y; j++){
            if(i == x && j == y)
                printf("X ");
            else
                printf("%c ", game[i][j].type);
        }
    }
    putchar('\n');
}

void printGame(struct territoire game[X][Y]){
    int i, j;
    for(i = 0; i < X; i++){
        putchar('\n');
        for(j = 0; j < Y; j++){
            printf("%c ", game[i][j].type);
        }
    }
    putchar('\n');
}

void setGame(struct territoire game[X][Y]){
    struct territoire current_case;
    int i, j, element;
    srand(time (NULL));
    for(i = 0; i < X; i++){
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
        }
    }
    printGame(game);
}

struct hero placeHero(struct territoire game[X][Y]){
    struct hero myHero;
    srand(time (NULL));
    do{
        myHero.x = rand()%X;
        myHero.y = rand()%Y;
        
    }while(getCaseType(game, myHero.x, myHero.y) != '~');
    return myHero;
}

int main(void){
    struct territoire game[X][Y];
    struct hero myHero;
    setGame(game);
    myHero = placeHero(game);
    printf("Mon héro se trouve à X = %d/ Y = %d\n", myHero.x, myHero.y);
    printHeroPosition(game, myHero.x, myHero.y);
    while(1){
        moveHero(myHero);
    }

}