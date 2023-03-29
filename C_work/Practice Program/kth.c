#include <stdio.h>
int main()
{
    int arr[] = {3, 4, 5, 9, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4, temp;
    for (int i = 0; i < n; i++)
    {
        printf("  %d ", arr[i]);
    }
    if (k > n)
    {
        printf(" \n Error:size \n ");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf(" \n %d \n ", arr[k-1]);
    return 0;
}