#include <stdio.h>
int fun(int *x, int *y, int *z)
{

    // printf("value of x = %d\n", *x);
    // printf("value of y = %d\n", *y);
    // printf("value of z = %d\n", *z);

     (*x)++;
     (*y)++;
     (*z)++;
    // *y++;
    // *z++;
    //printf("add of %p \n",x);
   // printf("check value of x = %d \n", (*x)+);
    //printf("add of %p\n",x);
    //  printf("check value of x = %d \n", *x++);
    // printf("check value of y = %d\n", *y++);
    // printf("check value of z = %d\n", *z++);

    return 0;
}