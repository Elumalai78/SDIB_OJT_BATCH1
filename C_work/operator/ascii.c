#include<stdio.h>
int main()
{
    int i;
    char a='b';
    for(i=0;i<=255;i++)
    {
       printf("\n%d : %c",i,i);
    }
 
    printf("%c : %c",a,a-32);
 
    return 0;
}