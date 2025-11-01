#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Number of Elements in Array A: ");
    scanf("%d",&n1);
    printf("Enter Number of Elements in Array B: ");
    scanf("%d",&n2);
    
    int x=n1+n2;
    int a[n1],b[n2],c[x];
    printf("Enter %d Elements of Array A: ",n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d Elements of Array B: ",n2);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n1;i++)
    {
        c[i] = a[i];
    }
    for(int j=n1;j<x;j++)
    {
        c[j] = b[j-n1];
    }
    
    printf("Array C = ");
    for(int i=0;i<x;i++)
    {
        printf("%d ",c[i]);
    }
}
