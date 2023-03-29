#include <stdio.h>

void main()
{
	int num = 0;
	do {
		- - num;
		printf(“%d”, num);
		num ++;
	   }
	while(num >= 0);
}