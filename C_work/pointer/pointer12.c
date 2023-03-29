#include <stdio.h>
int main()
{
    int a[6] = {2, 6, 7, 1, 9}, *p;
    p = a;
    *++p;
    printf("%d\n ", *p);
    *p++;
    p += 3;
    printf("%d\n", *p);
}