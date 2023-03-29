#include<stdio.h>

int main()
{
    int num, rev=0, rem, temp;
    printf("Enter a Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==num)
        printf("\nIt's a Palindrome Number");
    else
        printf("\nIt's not a Palindrome Number");
   
    return 0;
}