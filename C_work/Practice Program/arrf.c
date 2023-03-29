
/*#include <stdio.h>
#define main() elumalai()
int elumalai()
{

    int i, j, temp;
    int arr[]= {3, 6, 1, 7, 8, 9};
    int size= sizeof(arr) / sizeof(arr[0]);
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0; i < size ; i++){
        printf(" %d ", arr[i]);
    }
    return 0;
} */
#include <stdio.h>

#define main() my_main()

int my_main() {
    printf("Hello, world!\n");
    return 0;
}
 