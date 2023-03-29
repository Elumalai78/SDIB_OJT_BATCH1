#include<stdio.h>
int main()
{
int i=1,n,m,a;
printf("Enter the limit :");
scanf("%d",&n);
printf("Enter the table's number :");
scanf("%d",&a);
start:
printf("\n%d*%d=%d",i,a,i*a);
i++;
if(i<=n)
{
  goto start;
}
return 0;
}