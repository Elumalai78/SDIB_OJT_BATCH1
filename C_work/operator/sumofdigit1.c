#include<stdio.h>
int main()
{
    int n,sum=0,rem=0;
    printf("\n ENTER THE VALUE ");
    scanf("%d",&n);
    while (n>0)
    {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
    }
    printf("\n SUM OF DIGIT IS :%d",sum);
    return 0;


}