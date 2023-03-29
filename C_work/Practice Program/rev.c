#include <stdio.h>

int main() {
    int arr[] = {5, 3, 7, 2, 8}; // array to reverse
    int largest=arr[0];

    int n = sizeof(arr)/sizeof(arr[0]); // size of array
    
    // swap elements from start to end and from end to start
    for (int i = 0; i < n; i++) {
        if(arr[i]>largest)
        {
           largest =arr[i];
        }
        
    }
     printf("%d largest Number Of Array \n ", largest );
    }
    