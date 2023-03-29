#include<stdio.h>
int main()
{
   int a[100], n, i, max, min, c, b;

   printf("Enter array size : ");
   scanf("%d",&n);
    c=b=0;
   printf("Enter array elements: ");
   scanf("%d",&a[0]);
   max=min=a[0];
   for(i=1; i<n; i++)
   {
      scanf("%d",&a[i]);
      if(max<a[i])
      {
         min=a[i];
         b=i;
      }
      if(min>a[i])
      {
         min=a[i];
        b=i;
      }
   }

   printf("Largest element is %d at %d position.\n", max,c);
   printf("Smallest element is %d at %d position.", min,b);
   return 0;
}