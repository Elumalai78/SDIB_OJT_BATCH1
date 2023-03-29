#include<stdio.h>

int main()
{
    int arr[50], i, element, pos, size;
    printf("How many Element to Store in Array ? ");
    scanf("%d", &size);
    printf("Enter %d Array Elements: ", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter Element to Insert: ");
    scanf("%d", &element);
    printf("\nAt what position ? ");
    scanf("%d", &pos);
    for(i=size; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = element;
    size++;
    printf("\nThe New Array is:\n");
    for(i=0; i<size; i++)
        printf("%d  ", arr[i]);
 
    return 0;
}