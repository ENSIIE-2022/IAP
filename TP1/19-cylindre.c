//Lucas NAVETEUR
#include<stdio.h>
#include<stdlib.h>

double aire(double r){
    //calcul perimetre cercle rayon r
    return 2*3.14*r;
}

double perimetre(double r){
    //calcul aire d'un cercle de rayon r
    return 3.14*(r*r);
}

int cylindre(double r, double h){
    //affiche aire et volume d'un cylindre de rayçon r et de hauteur h
    printf("Aire : %lf / Volume : %lf\n", 2*aire(r)+perimetre(r)*h, aire(r)*h);
    return 0;
}

int main(int argc, char** argv){
    int rayon, hauteur;
    if(argc != 3){
        printf("Usage %s <rayon> <hauteur>\n  ",argv[0]);
        return -1;
    }
    rayon = atoi(argv[1]);
    hauteur = atoi(argv[2]);
    printf("Aire d'un cercle de rayon %d = %lf\n", rayon, aire(rayon));
    printf("Perimetre d'un cercle de rayon %d = %lf\n", rayon, perimetre(rayon));
    cylindre(rayon, hauteur);
    return 0;
}