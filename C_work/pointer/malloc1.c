#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
 
    int *ptr=(int *)malloc(n*sizeof(int));
 
     
    for(i=0; i<n; i++)
    {
        
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(ptr+i));  
 
    return 0;
}
 