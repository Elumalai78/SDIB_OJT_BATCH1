#include<stdio.h>
int main()
{
    float sal;
    printf("Enther The Salary\t");
    scanf("%f",&sal);
    if(sal>=12500 && sal<25000)
    printf("\n Accountant\t");
    else
    printf("\n clerk\t");
    return 0;
}