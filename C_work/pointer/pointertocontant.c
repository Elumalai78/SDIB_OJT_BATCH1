#include <stdio.h>

int main()
{
    int a = 10;
     const int *ptr = &a;
    ptr++;
    *ptr++;
    
    printf("Value of 'a' is %d", ptr);
    return 0;
}