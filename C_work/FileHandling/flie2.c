#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{
    FILE *fp;

    fp=fopen("hello.txt","O_create");
    if(fp==-1)
    {
        printf("\nFile Cant Open or File Not Found..");
          exit(1);
    }
    else 
    {
        printf("\n greate a file sucessfuly");
             
        return 0;
    }
}