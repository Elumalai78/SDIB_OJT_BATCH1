#include <stdio.h>
struct arith
{
    int a,b,result;
};
int main()
{
    struct arith A;
    printf("\n Enter the valu:");
    scanf("\n %d %d",&A.a,&A.b);
    A=add(A);
printf("\n %d result:", A.result);
}

struct arith add (struct arith A)
{
A.result = A.a + A.b;
return A;
}