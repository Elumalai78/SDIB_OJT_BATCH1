#include<stdio.h>

int main()
{
    int arr[10], i;
    printf("Enter any 10 elements: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe array elements in reverse order:\n");
    for(i=9; i>=0; i--)
    {
        if(i==0)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
  
    return 0;
}