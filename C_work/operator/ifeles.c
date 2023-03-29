//if else statement
 
#include<stdio.h>
int main()
{
    char name[10];
    int age;
    printf("\nEnter Your Name : ");
    scanf("%s",name);
    printf("\nEnter The Age : ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\n %s  age is %d Eligible For Vote",name,age);
    }
    else
    {
        printf("\n %s  age is %d Not Eligible For Vote",name,age);
    }
    return 0;
}