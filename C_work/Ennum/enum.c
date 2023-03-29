#include <stdio.h>

int main()
{
    enum days{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum days n;
    int i = 0;

    printf("Insert a week day: ");
    scanf("%d", n);

    switch(n)
    
    {

    case 0:
        i=i+1;
        printf("Number of the day: %i", i);
        break;

    case 1:
        i=i+2;
        printf("Number of the day: %i", i);
        break;

    case 2:
        i=i+7;
        printf("Number of the day: %i", i);
        break;

    default:
        printf("Error. Please insert a valid week day.");
        break;

    }
}