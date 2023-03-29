#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    a=add(a,b);
    printf("\nTotal : %d",a);
    return 0;
}
 
int add(int x,int y)
{
    return x+y;
}
 