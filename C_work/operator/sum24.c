#include<stdio.h>
int main()
{
    int i = 5;
    while(i-- >= 0)
        printf("%d,", i);
    i = 5;
    printf("\n");
    while(i-- >= 0)
        printf("%i,", i);
    while(i-- >= 0)
        printf("%d,", i);
    return 0;
}