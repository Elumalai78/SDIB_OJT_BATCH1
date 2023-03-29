#include<stdio.h>
int main()
{
    static int a[20];
    int i = 0;
    a[i] = i  ;
    printf("%d, %d, %d\n", a[0], a[1], i);
    return 0;
}