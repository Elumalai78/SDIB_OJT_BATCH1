#include <stdio.h>
void main ()
{
   int a[20];
   int i, j, t, n;
   printf("\n enter the array elements ");
   scanf("%d", &n);
   printf("\n Enter the value");
   for (i = 0; i < n; ++i)
   {
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
         }
      }
   }
   printf("\n The numbers in ascending order is:");
   for (i = 0; i < n; ++i){
      printf("%d\n", a[i]);
   }
}