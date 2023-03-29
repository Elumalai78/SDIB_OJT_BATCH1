#include<stdio.h>
struct emp
{
    char name[10];
    int age;
    float hight;
    int adar;
}emp;
int main()
{
    
    emp.name="Elumalai";
    emp.age=25;
    emp.hight=5.2;
    emp.adar=1237363;

 
    printf("\nName        : %c",emp.name);
    printf("\nid        : %d",emp.age);
    printf("\nsalary     : %f",emp.hight);
    printf("\ndesgination    : %d",emp.adar);
   printf("\nSize of Struct : %d",sizeof(emp));
  
   
    return 0;
}