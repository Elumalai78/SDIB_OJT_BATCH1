#include <stdio.h>
int main ()
{
   int a[20];
   int i, j,  n, t;
   printf("enter number of elements in an array\n");
   scanf("%d", &n);
   printf("Enter the elements\n");
   for (i = 0; i < n; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
   
      {
         if (a[i] > a[j])
         {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            t=a[0];
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < n; ++i)
   {
      printf("%d\n",a[i]);
   }
}