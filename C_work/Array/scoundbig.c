#include<stdio.h>

int main()
{
    int arr[10], great, small, i, j, k, limit=10, count=0;
    printf("Enter any 10 elements: ");
    for(i=0; i<limit; i++)
    {
        scanf("%d", &arr[i]);
    }
	
   
    for(i=0; i<limit; i++)
    {
        for(j=i+1; j<limit; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                limit = limit-count;
                for(k=j; k<limit; k++)
                    arr[k] = arr[k+1];
                count = 0;
            }
        }
    }
	
   
    great = arr[0];
    small = arr[0];
    for(i=0; i<limit; i++)
    {
        if(great<arr[i])
            great = arr[i];
        if(small>arr[i])
            small = arr[i];
    }
	
    
    for(i=0; i<limit; i++)
    {
        if(great==arr[i])
        {
            count++;
            limit = limit-count;
            for(j=i; j<limit; j++)
                arr[j] = arr[j+1];
            count = 0;
        }
    }
	
    
    for(i=0; i<limit; i++)
    {
        if(small==arr[i])
        {
            count++;
            limit = limit-count;
            for(j=i; j<limit; j++)
                arr[j] = arr[j+1];
            count = 0;
        }
    }
	
    
    great = arr[0];
    small = arr[0];
    for(i=0; i<limit; i++)
    {
        if(great<arr[i])
            great = arr[i];
        if(small>arr[i])
            small = arr[i];
    }
    printf("\nThe second largest number = %d", great);
    printf("\nThe second smallest number = %d", small);
    
    return 0;
}