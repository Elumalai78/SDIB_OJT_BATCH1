#include<stdio.h>
int *add(int,int);
int main()
{
   // int a=5, b=6;
    int(*sum)(int,int);
    sum = &add;
    sum(5,6);
    printf("%d",sum);
    return 0;
}
    int *add(int a,int b)
    {
        int a,b;
          return a + b;
      
    }

