#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 5, 6 };

    int size = 0;
    int i = 0;
    int missing = 0;

    size = sizeof(arr) / sizeof(arr[0]);

    missing = (size + 1) * (size + 2) / 2;

    for (i = 0; i < size; i++)
        missing = missing - arr[i];

    printf("Missing number is: %d\n", missing);

    return 0;
}