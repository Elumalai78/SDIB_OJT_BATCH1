#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *ptr, n = 10;

    // allocate memory for 10 integers
    ptr = (int*) calloc(n, sizeof(int));

    // check if allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed");
        exit(1);
    }

    // initialize the array
    for (i = 0; i < n; i++) {
        (ptr[i]) = i ;
    }

    // print the array
    for (i = 0; i < n; i++) {
        printf("%d ", (ptr[i]));
    }

    // free the allocated memory
    free(ptr);

    return 0;
}