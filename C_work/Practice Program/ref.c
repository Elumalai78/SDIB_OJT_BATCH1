#include <stdio.h>

int add(int *x, int *y) {
int a = 10, b = 20;
   int result= a + b;
  printf("%d + %d = %d\n", a, b, result);
  return *x + *y;
}

int main() {
  int a = 5, b = 3, result;
  result=add(&a, &b);
  printf("%d + %d = %d\n", a, b, result);
  return 0;
}