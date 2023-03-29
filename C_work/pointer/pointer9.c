#include<stdio.h>
int main()
{
    char *str1 ="abc";
    char str2[]="abcd";
    printf("%ld %ld %ld \n ",sizeof (str1), sizeof (str2), sizeof ("abcd"));
    return 0; 
}