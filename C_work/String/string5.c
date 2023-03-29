#include<stdio.h>
int main()
{
    char p[]="%d";
    p[1]='c';
    printf(p,65);
    return 0;
}