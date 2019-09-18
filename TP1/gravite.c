#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double gravite(double m1, double m2, double d){
    double g = 6.67 * pow(10.0,-11); 
    return g*m1*m2/(d*d);
}


int main(int argc, char** argv){
    printf("%lf\n",gravite(50,50,0.1));
    return 0;
}