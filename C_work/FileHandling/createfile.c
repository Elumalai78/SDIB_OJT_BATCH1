#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("lab1.txt","w");
    if(ptr==NULL)
    {
        printf("File not created");
    }
    else
    {
        printf("File created Succesfully\n");
        fprintf(ptr,"This is the content of fthe file.txt");
    }
}