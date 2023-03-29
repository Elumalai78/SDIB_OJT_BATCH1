#include<stdio.h> 
int main() 
{ 
int i,sq,num; 
printf("\n ENTER THE VALUE");
scanf("%d",&num);

for(i=1;i<=num;i++)
{ 
    sq=i*i; 
    printf("%d Square is equal to %d\n",i,sq); 
} 
   return 0; 
} 