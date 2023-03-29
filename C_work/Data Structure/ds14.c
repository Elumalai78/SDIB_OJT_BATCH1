#include<stdio.h>
void main()
{
    int a[]={7,4,10,8,3,1};
    int i,j,min,temp;
    for(i=0;i<5;i++)
    {
        temp=0;
        min=i;
        for(j=i+1;j<6;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("\nArray after sorting is\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}