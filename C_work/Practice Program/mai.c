#include <stdio.h>

extern int num; // declaring the external variable num

int main() {
  num = 42; // set the value of num using the set_num function in helper.c
 
  return 0;
}