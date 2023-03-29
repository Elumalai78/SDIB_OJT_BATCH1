#include<stdio.h>
int main()
{
    int a=10, *p;
    p=&a; 
 
    printf("\n Value of  A           : %p",a);
    printf("\n Address of  A         : %p",&a);
    printf("\n Value of  P           : %p",p);
    printf("\n Address of  P         : %p",&p);
    printf("\n P point               : %p",*p);
 
    return 0;
}
 