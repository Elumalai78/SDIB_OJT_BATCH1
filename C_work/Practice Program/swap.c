#include <stdio.h>
int swap(int *a, int *b)

{
    // int x=5, y=6;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("%d,%d\n", *a, *b);
}
int main()
{
    int x = 5, y = 6;
    printf("%d,%d\n", x, y);
    swap(&x, &y);
    printf("%d,%d\n", x, y);
    return 0;
}
