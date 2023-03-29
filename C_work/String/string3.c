#include<stdio.h>
#include<string.h>
 
int main()
{
    char c[20],a[20];
    char x[10]={'R','A','M','\0'};
    char y[10]={'K','U','M','A','R','\0'};
    printf("x : %s",x);
    printf("\nEnter The String : ");
    gets(c);
 
    printf("\nCompare   : %d ",strcmp(x,c));
    printf("\nLength    : %d ",strlen(c));
    printf("\nUppercase : %s ",strupr(c));
    printf("\nLowercase : %s ",strlwr(c));
    printf("\nCopy      : %s ",strcpy(a,c));
    strcat(x,y);
    printf("\nConcatenation : %s ",x);
    return 0;
}
 