#include <stdio.h>

void find_second_smallest_largest(int arr[], int n)
{
    int smallest = arr[0], second_smallest = arr[0];
    int largest = arr[0], second_largest = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        // Finding the smallest element in the array
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        // Finding the second smallest element in the array
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
        
        // Finding the largest element in the array
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        // Finding the second largest element in the array
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    
    printf("The second smallest element in the array is: %d\n", second_smallest);
    printf("The second largest element in the array is: %d\n", second_largest);
}

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    find_second_smallest_largest(arr, n);
    
    return 0;
}