#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3], i, j, rowtot, coltot, tot=0;
    printf("Enter 3*3 matrix elements: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nThe Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        rowtot=0;
        coltot=0;
        for(j=0; j<3; j++)
        {
            rowtot = rowtot + mat[i][j];
            coltot = coltot + mat[j][i];
            tot = tot + mat[i][j];
        }
        printf("\nRow %d Total = %d\t\t", i+1, rowtot);
        printf("Column %d Total = %d", i+1, coltot);
    }
    printf("\n\nWhole Total = %d", tot);
    getch();
    return 0;
}