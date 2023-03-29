#include <stdio.h>
struct arith
{
    int a,b,*result;

}val;
int add(int a,int b)
{
    return(a+b);

}
int main()
{
    printf ("\n Enter the valu a&b");
   scanf("\n %d %d", &val.a,&val.b);
   val.result=add (val.a,val.b); 
   printf("%d result" ,val.result);
   return 0;
   

}