#include <stdio.h>
#include <stdlib.h>
#include "fact.h"

int main(void){
  for(int n = 0; n < 10; n++)
    printf("%d : %d! = %d, %d!! = %d\n", n, n, fact(n), n, fact2(n));
}
