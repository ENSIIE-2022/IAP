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
};

char getCaseType(struct territoire game[X][Y], int x, int y){
    printf("----------------- %c ----------------\n", game[x][y].type);
    return game[x][y].type;
}

struct hero moveHero(struct territoire game[X][Y], struct hero myHero){
    char mouvement;
    printf("Quel mouvement pour notre Héro ? (%d/%d)\n", myHero.x, myHero.y);
    printf("\tZ : Avancer\n");
    printf("\tQ : Aller à gauche\n");
    printf("\tS : Reculer\n");
    printf("\tD : Aller à droite\n");
    printf("\tX : Ne pas bouger\n");
    scanf(" %c", &mouvement);
    switch(mouvement){
        case 'Z':
            if(myHero.x == 0 || (getCaseType(game, (myHero.x)-1, myHero.y) == '~')){
                printf("\tLe héro ne peut plus aller à gauche !\n");
                break;
            }else{
                printf("\tLe héro va à gauche !\n");
                myHero.x -= 1;
                break;
            }
        case 'Q':
            if(myHero.y == 0 || (getCaseType(game, myHero.x, (myHero.y)-1) == '~')){
                printf("\tLe héro ne peut plus avancer !\n");
                break;
            }else{
                printf("\tLe héro avance !\n");
                myHero.y -= 1;
                break;
            }
        case 'S':
            if(myHero.x == Y-1 || (getCaseType(game, (myHero.x)+1, myHero.y) == '~')){
                printf("\tLe héro ne peut plus aller à droite !\n");
                break;
            }else{
                printf("\tLe héro va à droite !\n");
                myHero.x += 1;
                break;
            }
        case 'D':
            if(myHero.y == X-1 || (getCaseType(game, myHero.x, (myHero.y)+1) == '~')){
                printf("\tLe héro ne peut plus reculer !\n");
                break;
            }else{
                printf("\tLe héro recule !\n");
                myHero.y += 1;
                break;
            }
        case 'X':
            printf("\tLe héro ne bouge pas !\n");
            break;
        default:
            printf("Mouvement non reconnu, on ne fait rien\n");
            break;
    }
    //Si la case destinatrice est de l'eau, return 1 (pb)
    return myHero;
}

void printHeroPosition(struct territoire game[X][Y], struct hero player){
    int i, j;
    for(i = 0; i < X; i++){
        putchar('\n');
        for(j = 0; j < Y; j++){
            if(i == player.x && j == player.y)
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

//setGame sert à attribuer des types aux différentes cases du plateau de jeu
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

//
struct hero randomPlaceHero(struct territoire game[X][Y]){
    struct hero myHero;
    srand(time (NULL));
    do{
        myHero.x = rand()%X;
        myHero.y = rand()%Y;
        
    }while(getCaseType(game, myHero.x, myHero.y) == '~');
    return myHero;
}

int main(void){
    struct territoire game[X][Y];
    struct hero myHero;
    setGame(game);
    myHero = randomPlaceHero(game);
    printf("Mon héro se trouve à X = %d/ Y = %d\n", myHero.x, myHero.y);
    printHeroPosition(game, myHero);
    while(1){
        myHero = moveHero(game, myHero);
        printHeroPosition(game, myHero);
}