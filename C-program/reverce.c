#include<stdio.h>
int main()
{
    int num,a,b,c,d,sum;//123
    printf("\n ENTER THE 3 DIGIT NUMBER ");
    scanf("%d", &num);
    a=num%10;//3
    b=num/10;//12
    c=b%10;//2
    d=b/10;//1
    sum=a*100+c*10+d;
    printf("\n SUM OF DIGIT IS :%d",sum);
    return 0;


}