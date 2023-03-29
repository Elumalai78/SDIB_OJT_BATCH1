#include <stdio.h>
int main() 
{
  int a;
  int *ptr;
  ptr=&a;
  printf("\n %p",ptr);
  ptr++;
  printf("\n %p",ptr);
  *ptr++;
  return 0;
  
  }
