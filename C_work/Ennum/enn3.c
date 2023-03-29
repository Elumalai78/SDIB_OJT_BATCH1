#include<stdio.h>
typedef enum{
    male,female=-1
}gender;
int main()
{
    gender var= male;
    gender var1=female;
    printf("%d%d",var,var1);
    return 0;

}