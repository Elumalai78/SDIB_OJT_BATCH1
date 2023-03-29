#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n Enter the new file name :");
    scanf("%[^\n]", &name);
    fp=fopen(name,"r");
    printf("value of the fp is :%d",fp);
    if(fp==NULL)
    {
        printf("\n ERROR: fail to open %s file \n ", name);
        exit(1);

    }
     printf("\n data in %s file\n\n",name);
 
     while((ch=getc(fp))!=EOF)
     putc(ch,fp);
     fseek(fp,10,SEEK_SET);
printf("\n \n data in file \n");
while((ch=getc(fp))!=EOF)
     putchar(ch);
     fclose(fp);

}