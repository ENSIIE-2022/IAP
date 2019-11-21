#include "fact.h"

int fact(int n){
  if(n <= 1)
    return 1;
  return n * fact(n - 1);
}

int fact2(int n){
  if(n <= 1)
    return 1;
  return (2 * n - 1) * fact2(n - 1);
}
