#include <stdio.h>
int main() 
{
    int a[]={1,2,3,4,5},*p;
    p=a;

    printf("\n %d",p);
    printf("\n %d",p++);
    printf("\n %d",p);
    printf("\n %d",++p);
    printf("\n %d",p);


    return 0;


}
