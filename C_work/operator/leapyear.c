// Nested if Finding given year is leap year
 
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter The Year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("%d is leap Year",year);
        }
        else
        {
            printf("%d is Not leap Year",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("%d is leap Year",year);
        }
        else
        {
            printf("%d is Not leap Year",year);
        }
 
    }
    return 0;
}
 