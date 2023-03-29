#include<stdio.h>
int main()
{
    int i=6,*j,k;
    j=&i;
    printf("%d\n", i**j*i+*j);
    return 0;
}