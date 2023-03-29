#include<stdio.h>

int main()
{
    int i;
    int a[]={1,2,5,[14]=13,[5]=5,[3]=4};
    for (i=0;i<15;i++)
    printf("%d",a[i]);
     printf("\n%d",a[i]);
     return 0;
    

}