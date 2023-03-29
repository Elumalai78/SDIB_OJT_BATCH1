#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i;
   char *ptr;
   char *fun();
   ptr=fun();
   printf("%s\n",ptr);
   return 0;
}
char *fun()
{
    char disk[30];
    strcpy(disk,"memory in c");
    printf("%s",disk);
    return 0;
}
