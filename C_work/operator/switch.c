// Switch Statement
#include<stdio.h>
int main()
{
    int ch;
    printf("\nEnter The Value : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\n One");
        break;
    case 2:
        printf("\n Two");
        break;
    case 3:
        printf("\n Three");
        break;
    default:
        printf("\n Invalid No");
        break;
    }
    return 0;
}
 