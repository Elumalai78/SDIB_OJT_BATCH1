#include<stdio.h>
int main()
{
	char c='T'; 
	char *ptr=&c; 
	
	
	printf("Size of character pointer is %ld bytes",sizeof(ptr));

	double x=3.14;   
	double *ptr=&x; 
	
	printf("Size of double pointer is %ld bytes",sizeof(ptr));

    
	int arr[]={10,20,30};  
	int *ptr=arr;   
	
	printf("size of a pointer to an array is %ld bytes",sizeof(ptr));
}

