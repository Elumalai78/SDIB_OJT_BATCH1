#include<stdio.h>
int main()
{
int a[10],*p;
a[0]=1;
a[1]=2;
p=a;
(*p)++;
p=&a[1];
(*p)++;
printf("%d %d %d \n",  *p,a[0],a[1]);
return 0;

}