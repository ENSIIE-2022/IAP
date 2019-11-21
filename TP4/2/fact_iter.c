#include "fact.h"

int fact(int n){
  int f = 1;
  while(n >= 1){
    f *= n;
    n -= 1;
  }
  return f;
}

int fact2(int n){
  int f = 1;
  while(n >= 1){
    f *= 2 * n - 1;
    n -= 1;
  }
  return f;
}
