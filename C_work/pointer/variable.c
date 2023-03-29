#include <stdio.h>

int main()
{
   const int a = 10;
      int *ptr = &a;
   
    (*ptr)++;
    
    printf("Value of 'a' is %d", (*ptr)++);
    printf("Value of 'a' is %d", &a++);
    return 0;
}