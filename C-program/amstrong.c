#include<stdio.h>
int main()
{
  int i,n,h,arms=0,a,b,c,d,e;
  printf("\nEnter the starting value:");
  scanf("%d",&i);
  printf("\nEnter the Ending value:");
  scanf("%d",&n);
  printf("\nArmstrong numbers:");
  while(i<=n)
  {
    a=i/10;//12
    b=i%10;//8
    c=a/10;//1
    d=a%10;//2
    b=b*b*b;
    c=c*c*c;
    d=d*d*d;
    e=b+c+d;
    if(i==e)
    {
      printf("\n%d",i);
      arms++;
    }
    i++;
  }
  printf("\nTotal number of armstrong values:%d",arms);
  return 0;
}
 