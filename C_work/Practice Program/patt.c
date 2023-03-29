#include <stdio.h>
int main()
{
    int i, j, space, row = 6 , num=1;
    for (i = 1; i <= row; i++)
    {
        for (space = 1; space <= row - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
           
              num=num+2;
              j=num;
              if(num%2==0){
                printf("%d", num);
              }
               
            
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    int num = 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("%d", num);
            num += 2;
            if (num > 9) {
                num = 1;
            }
        }
        printf("\n");
    }

    return 0;
}*/
