//else if statement
 
#include<stdio.h>
int main()
{
   int a;
   printf("\nEnter The Value of A : ");
   scanf("%d",&a);
   if(a<0)
   {
       printf("%d is Negative Value",a);
   }
   else if(a==0)
   {
       printf("The Given Value is 0");
   }
   else if(a>0)
   {
       printf("%d is Positive Value",a);
   }
    return 0;
}
 
 