#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int * const p = &a;
    printf("%d", *p );
    return 0;
}