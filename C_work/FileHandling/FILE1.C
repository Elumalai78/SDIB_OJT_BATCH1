#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("hello.txt","r");
    if(fp==NULL)
    {
        printf("\nFile Cant Open or File Not Found..");
    }
    else 
    {
        printf("\n greate a floder");
        return 0;
    }
}