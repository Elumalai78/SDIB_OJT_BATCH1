 
#include<stdio.h>
struct student
{
    char *name;
    int id;
    float salary;
    char *destination;
};
int main()
{
    struct student emp[4];
 
    emp[0].name="Elumalai";
    emp[0].id=25;
    emp[0].salary=30000.500;
    emp[0].destination ="Engnieer";

 
    emp[1].name="vignesha";
    emp[1].id=26;
    emp[1].salary=30001.500;
    emp[1].destination="Engnieer";
 
   
    printf("\nName        : %s",emp[0].name);
    printf("\n id         : %d",emp[0].id);
    printf("\n salary     : %f",emp[0].salary);
    printf("\n Destinatin :%s",emp[0].destination);
    
    printf("\nName        : %s",emp[1].name);
    printf("\nAge         : %d",emp[1].id);
    printf("\nPercent     : %f",emp[1].salary);
   
 
    return 0;
}
