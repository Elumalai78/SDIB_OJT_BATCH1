#include <stdio.h>
int add(int);
int a = 10;
int main()
{
  int x;
    //int a = 2;
    printf("%d\n",a);
    //printf("%d\n",add(x));
    add(20);
    printf("%d\n",a);
    return 0;
}

int add(int x)
{
    //x=20;
    printf("%d\n", x);
}