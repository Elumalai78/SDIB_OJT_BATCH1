#include<stdio.h>
#define sawp(x,y)  {x = x + y; y = x - y; x = x - y; }

int main()
{
    int a=6, b=5;
    sawp(a,b);
     printf("After swapping: a = %d, b = %d\n", a, b);


     sawp(a,b);

      printf("After swapping: a = %d, b = %d\n", a, b);
     return 0;

}