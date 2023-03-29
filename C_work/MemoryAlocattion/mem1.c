#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *numbers=(int*)malloc(4 * sizeof(int));
    numbers[0]=9;
    free(numbers);
    printf("\n stored integers are");
    printf("\n stored integers are[%d]=d");
    return 0;
}