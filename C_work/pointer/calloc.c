#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int i,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("Enter a integer : ");
        scanf("%d",ptr+i);
    }
 
    for(i=0; i<n; i++)
    {
        printf("\n%d ",ptr[i]);
    }
        for(i=0; i<n; i++)
    {
        printf("\n%d ",ptr[i]+1);
    }
        for(i=0; i<n; i++)
    {
        printf("\n%d ",ptr[i]);
    }
 
    return 0;
}
 
