#include<stdio.h>
struct emp
{
    char *name;
    int id;
    float salary;
    char *desgination;
    double number;

}emp;
int main()
{
    
    emp.name="Elumalai";
    emp.id=25;
    emp.salary=30000.500;
    emp.desgination= "Engineer";
    emp.number=1237363;

 
    printf("\nName        : %s",emp.name);
    printf("\nid        : %d",emp.id);
    printf("\nsalary     : %f",emp.salary);
    printf("\ndesgination    : %s",emp.desgination);
   printf("\nSize of Struct : %d",sizeof(emp));
   printf("\nSize of char : %d",sizeof(char));
   printf("\nSize of integer : %d",sizeof(int));
   printf("\nSize of float : %d",sizeof(float));
   printf("\nSize of double : %d",sizeof(double));
   
    return 0;
}
 