#include<stdio.h>
int main()
{
    int a[5][2]={{0,0},{0,1},{2,4},{3,6},{4,8}};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n %d %d",a[i],a[j]);

        }
    }
    return 0;
}