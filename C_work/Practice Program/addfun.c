#include <stdio.h>

int main() {
    int arr[] = {2, 5, 3, 2, 8, 5, 7, 3}; // array to check for duplicates
    int n = sizeof(arr)/sizeof(arr[0]); // size of array
    
    // loop through each element in the array
    for (int i = 0; i < n-1; i++) {
        // loop through each element after the current element
        for (int j = i+1; j < n; j++) {
            // if the current element and another element are the same
            if (arr[i] == arr[j]) {
                printf("%d is a duplicate\n", arr[i]); // print the duplicate element
            }
        }
    }
    
    return 0;
}