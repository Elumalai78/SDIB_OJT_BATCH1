#include<stdio.h>

int main()
{
    int a[10], b[10], c[20], i, j, limitC, temp;
    printf("Enter 10 elements in array A:");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("Enter 10 elements in array B:");
    for(i=0; i<10; i++)
        scanf("%d", &b[i]);
    printf("\nElements of Array A are:\n");
    for(i=0; i<10; i++)
    {
        if(i==9)
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }
    printf("\n\nElements of Array B are:\n");
    for(i=0; i<10; i++)
    {
        if(i==9)
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }
	
    
    for(i=0; i<10; i++)
        c[i] = a[i];
    for(j=0; j<10; j++)
    {
        c[i] = b[j];
        i++;
    }
	
    
    for(j=0; j<19; j++)
    {
        for(i=0; i<19; i++)
        {
            if(c[i]<c[i+1])
            {
                temp = c[i];
                c[i] = c[i+1];
                c[i+1] = temp;
            }
        }
    }
    printf("\n\nElements of Array C are:\n");
    for(i=0; i<20; i++)
    {
        if(i==19)
            printf("%d", c[i]);
        else
            printf("%d, ", c[i]);
    }
    
    return 0;
}