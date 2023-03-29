#include<stdio.h>
enum hello
{
    a,b=99,c,d=-1
};
main()
{
    enum hello m;
    printf("%d %d %d %d",a,b,c,d);
}