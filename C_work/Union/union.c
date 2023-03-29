#include <stdio.h>
struct data 
{
    int a:4;
    char ch:1;
};
int main()

{
    struct data d={10,'a'};
    printf("%d", sizeof(d));
     printf("%d", sizeof(int));
      printf("%c", sizeof(char));
    return 0;
}