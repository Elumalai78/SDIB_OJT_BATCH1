#include<stdio.h>
 
void display();
 
int a=10;
 
int main()
{
    printf("\n Value of A : %d",a);
    display();
    return 0;
}
 
void display()
{
    a++;
    printf("\n Value of A : %d",a);
}
