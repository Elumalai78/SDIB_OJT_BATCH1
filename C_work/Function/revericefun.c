#include<stdio.h>
int 
Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}

int main()
{
   int number, reverse;

   printf("ENTER a THE VALUE: ");
   scanf("%d", &number);

   reverse = Reverse(number);

   printf("The reverse of %d is: %d", number, reverse);

   return 0;
}