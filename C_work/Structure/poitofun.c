#include<stdio.h>

struct arith
{
    int a,b;
    int(*fnptr)(int,int)

};
int main()
{
    struct arith add,sub;
    printf("\n Enter the value of A and B");
    scanf("\n %d %d ", &add.a, &add.b);
    sub=add;
    add.fnptr=addition;
    sub.fnptr=subration;
    printf("\n %d addition of the ", add.fnptr (int, int)

}