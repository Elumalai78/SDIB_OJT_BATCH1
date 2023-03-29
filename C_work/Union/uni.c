#include<stdio.h>
union demo
{
    int id;
    char *name;
    int age;

} o;
int main()
{
    o.name="Elumalai";
    o.id=30;
    o.age=29;
 
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.id);
    printf("\nPercent     : %f",o.age);
    printf("\nSize of union : %d",sizeof(o));
    return 0;
}
