#include<stdio.h>

int main()
{
    int arr[10], del, i, j, found=0, size;
    printf("Enter 10 Array Elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("Enter Element to be Delete: ");
    scanf("%d", &del);
    size = 10;
    for(i=0; i<size; i++)
    {
        if(arr[i]==del)
        {
            for(j=i; j<(size-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            size--;
        }
    }
    if(found==0)
        printf("\nElement does not found in the list!");
    else
        printf("\nElement Deleted Successfully!");

    return 0;
}