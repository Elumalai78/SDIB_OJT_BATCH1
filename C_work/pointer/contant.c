#include <stdio.h>

int main()
{
   int  const *const ptr ;
   int a = 10 ;
      int *ptr = &a;
   ptr++;
   *ptr++;
    
    printf("Value of 'a' is %d", *ptr++);
   
    return 0;
}