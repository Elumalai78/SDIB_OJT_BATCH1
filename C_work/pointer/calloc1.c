#include<stdio.h>
#include<stdlib.h>
int main()
{
   
    int *p,i,n, *temp;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
 
    if(p==NULL)
    {
        printf("Memory Not Available ...");
        exit(1);
    }
 
     printf("memory allocate ");
 
    for(i=0; i<n; i++)
    p[i]=i+1;

      printf("  \n");

temp= realloc(p,(sizeof(int))+10);
p=temp;
n+=10;
  for(i=0; i<n; i++)
  printf("%d", p[i]);

 printf("  \n");
return 0;


    }
 