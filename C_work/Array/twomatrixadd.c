#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[3][3], mat2[3][3], i, j, mat3[3][3];
    printf("Enter 3*3 matrix 1 elements :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&mat1[i][j]);
    }
    printf("Enter 3*3 matrix 2 elements :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&mat2[i][j]);
    }
    printf("\nAdding the two matrix.....");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ",mat3[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}