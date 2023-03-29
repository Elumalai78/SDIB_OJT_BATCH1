#include <stdio.h>  
enum days{sunday=1, monday, tuesday, wednesday, thursday, friday, saturday};  
int main()  
{  
   enum days d;  
   d=monday;  
   switch(d)  
   {  
       case sunday:  
       printf("Today is sunday");  
       break;  
       case monday:  
       printf("Today is monday");  
       break;  
       case tuesday:  
       printf("Today is tuesday");  
       break;  
       case wednesday:  
       printf("Today is wednesday");  
       break;  
       case thursday:  
       printf("Today is thursday");  
       break;  
       case friday:  
       printf("Today is friday");  
       break;  
       case saturday:  
       printf("Today is saturday");  
       break;  
   }  
  
    return 0;  
}  