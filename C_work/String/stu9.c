#include<stdio.h>
#include<string.h>

int main()
{
    static char str1[] = "dills";
    static char str2[20];
    static char str3[] = "Daffo";
    int i;
    i = strcmp(strcat(str3, strcpy(str2, str1)), "Daffodills");
    printf("%d\n", i);
    return 0;
}