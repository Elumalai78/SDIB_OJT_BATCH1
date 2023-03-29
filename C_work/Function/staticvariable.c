#include<stdio.h>
 
void display();
 
 
int main()
{
    display();
    display();
    display();
}
 
void display()
{
    static int x=1;
    x++;
    printf("\nx : %d",x);
}
 