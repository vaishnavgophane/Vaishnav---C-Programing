// Subtract two matrices.
#include<stdio.h>

int main()
{
    int a[3][3],b[3][3],c[3][3] = {0};  // Initialize 3 Matrices
    int i,j;

    // Input for Matrix A :
    printf("Enter Elements Of Matrix A: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // Input for Matrix B :
    printf("Enter Elements Of Matrix B: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // Substraction Logic
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    // Print Final Output Matrix:
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}