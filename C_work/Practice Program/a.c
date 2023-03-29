#include<stdio.h>
int add(int *a,int *b);
int main()
{
    int a=5, b=6;
    int sum= add(&a,&b);
    printf("%d",sum);
}
    int add(int *a,int *b)
    {
          return *a + *b;
      
    }


    

