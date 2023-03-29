#include<stdio.h>
int main()
{ 
   int i;
 int a[6] = {12,20,8,16, 40}; 
 
for (i =0; i<5; i++) 
  printf("sizeof array [%d] = %p\n",i,&a); 
}
  