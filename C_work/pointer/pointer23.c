#include <stdio.h>
int main(void)
{
char *ptr= "linux";
printf("\n [%c]",*ptr++);
printf("\n [%c]",*ptr);
return 0;
}