
#include <stdio.h>
int Prime(int num)
{
    int count = 0;
    
    if (num == 1)
    {
        count = 1;
    }
    for (int i = 2; i <= num / 2; i++){
        if (num % i == 0)
        {
            count = 1;
            break;
        }
    }    
    return count;
}
int main(){
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (Prime(num) == 0)
    {
        printf("%d is a Prime Number.", num);
    }
    else{
        printf("%d is not a Prime Number.", num);
    }
    return 0;
}