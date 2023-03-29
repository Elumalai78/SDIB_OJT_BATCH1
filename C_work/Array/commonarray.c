#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], b[10], c[10], i, j, k=0, x, count;
    printf("Enter 10 elements for array A: ");
    for(i=0; i<10; i++)
        scanf("%d", &a[i]);
    printf("Enter 10 elements for array B: ");
    for(i=0; i<10; i++)
        scanf("%d", &b[i]);
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(a[i]==b[j])
            {
                count = 0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
    printf("\nArray C (Contains Common Elements from two given Array):\n");
    for(i=0; i<k; i++)
        printf("%d ", c[i]);
    getch();
    return 0;
}