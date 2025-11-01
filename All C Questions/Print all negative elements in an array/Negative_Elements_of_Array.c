#include<stdio.h>

void main()
{
    int n;
    printf("Enter Number of Elemenst in Arrey: ");
    scanf("%d",&n);
    int a[n],neg[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Negative Elements are: ");
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0)
        {
            printf("%d ",a[i]);
        }
    }
}