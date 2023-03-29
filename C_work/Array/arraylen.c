#include <stdio.h>
int main()
{
    int numbers[] = {1,3,6,8,45,3,45,7,8,9,9,1,2,4,5,4};
    int arraySize = sizeof(numbers);
    int intSize = sizeof(numbers[0]);
    int length = arraySize / intSize;
    printf("Length of array = %d \n", length);
  return 0;
}