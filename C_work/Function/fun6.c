#include<stdio.h>
int i;
int fun1(int);
int fun2(int);
int main()
{
    extern int j;
    int i=3,x;
    x=fun1(i);
    printf("\n %d",x);
     
    fun2(i);
    printf("\n %d",i);
    return 0;

}
int fun1(int j)
{
printf("\n %d",++j);
return j;
}
int fun2(int i)
{
printf("\n %d",++i);
return 0;
}
