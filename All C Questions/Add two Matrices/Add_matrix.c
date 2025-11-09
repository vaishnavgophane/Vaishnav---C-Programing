// Add Two matrices
// i = row , j = column
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2] = {0};
    printf("Enter Elements of Matrix A: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter Elements of Matrix B: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("B[%d][%d] =  ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    // Addition logic
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Printing C Matrix
    printf("Addition : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;

}