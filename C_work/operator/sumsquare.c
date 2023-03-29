#include <stdio.h>
int main()
{
    int num, i, sum=0;
    printf("\n ENTER THE VALUE:");
    scanf("%d", &num);
     
     for (i=0;i<=num;i++)
      sum=sum+i*i;
      printf("\n %d SUM OF SUQARE NUMBER IS :%d", i,sum);
      return 0;
}