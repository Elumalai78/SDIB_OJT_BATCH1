#include<stdio.h>
struct student
{
    char *name;
    int id;
    float hight;
}stu;
int main()
{
    
    stu.name="Elumalai";
    stu.id=25;
    stu.hight=5.2;
 
    printf("\nName        : %s",stu.name);
    printf("\nid        : %d",stu.id);
    printf("\nhight     : %f",stu.hight);
 
    return 0;
}
 