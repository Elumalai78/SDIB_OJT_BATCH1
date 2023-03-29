#include<stdio.h>
int main()
{
    int x=20, *y,*z;
    y=&x;
    z=y;
    *y++;
    *z++;
    x++;
    printf("x=%d, y=%d, z=%d \n ", x,y,z);
    return 0;
}