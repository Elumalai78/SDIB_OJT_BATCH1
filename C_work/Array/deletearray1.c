#include<stdio.h>

int main()
{
    int arr[50], size, del, i, j, found=0;
    printf("How many element to store in Array ? ");
    scanf("%d", &size);
    printf("Enter %d Array Elements: ", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    printf("Enter Element to be Delete: ");
    scanf("%d", &del);
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
    {
        printf("\nElement Deleted Successfully!");
        printf("\nNew Array is:\n");
        if(size==0)
            printf("Empty!");
        else
        {
            for(i=0; i<size; i++)
                printf("%d  ", arr[i]);
        }
    }
  
    return 0;
}