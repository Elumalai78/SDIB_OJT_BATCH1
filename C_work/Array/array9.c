#include<stdio.h>
int main()
{
    char temp;
    char arr[10]={1,2,3,4,5,6,9,8};
    temp=(arr+1)[2];
    printf("%d\n",temp);
    return 0;
    
}