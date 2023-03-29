#include<stdio.h>
 
void swap(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
 
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap  A : %d   | B : %d",a,b);
    swap(&a,&b);
    printf("\nAfter  Swap  A : %d   | B : %d",a,b);
    return 0;
}