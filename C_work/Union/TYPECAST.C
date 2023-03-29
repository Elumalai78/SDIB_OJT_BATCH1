#include <stdio.h>
int main()
{
    int a=10;
    char a='a';
    float a=24.5;
    void *p;
    p=&a;
    printf("\n %d", *(int*)p);
    printf("\n %c", *(char*)p);
    printf("\n %f", *(float*)p);


}