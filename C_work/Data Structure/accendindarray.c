#include<stdio.h>
void main()
{
   int a[10], i, *p;
   a[0] = 1;
   a[1] = 2;
   p = a;
   (*p)++;
}


