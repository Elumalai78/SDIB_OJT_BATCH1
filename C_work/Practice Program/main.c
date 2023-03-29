#include<stdio.h>

int main(){

   int a=5,b=10,c=15;

//    printf("value of a = %d\n",a); 
//    printf("value of b = %d\n",b);
//    printf("value of c = %d\n",c);

    fun(&a,&b,&c);

   printf("value of a = %d\n",a); 
   printf("value of b = %d\n",b);
   printf("value of c = %d\n",c);

   
    return 0;
}