//Logical Operators
 
#include<stdio.h>
int main()
{
    int a=32; //>=35 and(&&) <=100
    printf("\nLogical And : %d",(a>=35 && a<=100));
    printf("\nLogical Or  : %d",(a>=35 || a<=100));
    printf("\nLogical Not : %d",!(a>=35));
 
 
    return 0;
}
 