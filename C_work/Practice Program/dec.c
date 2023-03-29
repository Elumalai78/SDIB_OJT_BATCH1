#include <stdio.h>
int main()
{
   // int temp=0;
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        
            }


        }

        for (int i = 0; i < n; i++)
        {
            printf("ascending order array  %d \n ", arr[i]);
        }
        return 0;



    }
    
}