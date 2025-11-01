//Copy all elements from an array to another array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n],b[n];

    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    printf("Elements of Array A          Elements of Array B \n");

    for(int i=0;i<n;i++)
    {
        printf("      %d                           %d               \n",a[i],b[i]);
    }
}