#include<stdio.h>
int func1(int);
int main()
{
    int k=35;
    k=func1(k=func1(k=func1(k)));
    printf("k=%d\n",k);
    return 0;

}
int func1(int k)
{
    k++;
    return k;
}