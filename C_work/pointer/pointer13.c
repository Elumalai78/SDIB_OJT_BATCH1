#include <stdio.h>
char* myfunc(char *ptr)
{
    ptr +=3;
    return (ptr);

}
void main()
{
    char *x,*y;
    x="PHYTEC";
    y=myfun(x);
    printf("%s\n",y);
    
}