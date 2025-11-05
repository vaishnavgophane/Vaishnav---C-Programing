#include<stdio.h>
int findmin(int a[],int n)
{
    int min = a[0];
    for(int i=1;i<n;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}
int findmax(int a[],int n)
{
    int max = a[0];
    for(int i=1;i<n;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter Number of Elements in Array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int min = findmin(a,n);
    int max = findmax(a,n);

    printf("Smallest Element in Array : %d\n",min);
    printf("Largest Element in Array : %d\n",max);

    
}