#include<stdio.h>
int main()
{
union job
{
    float salary;
    int workerno;
} j;
j.salary=12.3;
j.workerno=100;
 printf("\nsalary=%.1f", j.salary);
 printf("\nnumber of workers=%d\n",j.workerno);
 return 0;
}