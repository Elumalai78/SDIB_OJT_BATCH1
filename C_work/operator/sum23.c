#include<stdio.h>
int main()
{
    int x=1, y=1;
    for(; y; printf("%d %d\n", x, y))
    {
        y = x++ <= 5;
    }
    printf("\n");
    return 0;
}