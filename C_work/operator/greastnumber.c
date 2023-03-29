#include <stdio.h>
int main()
{
    int n1, n2;
    
    printf("Please Enter Two different values\n");
  
    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        printf("%d is Largest\n", n1);
    }
    else if (n2 > n1)
    {
        printf("%d is Largest\n", n2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}