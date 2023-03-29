#include<stdio.h>
#include<string.h>

int main()
{
    static char s[] = "Hello!";
    printf("%d\n", *(s+strlen(s)));
    return 0;
}