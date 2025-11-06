// Search an element in an array using pointers.
#include<stdio.h>
int main()
{
    int n,ct=0;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n];
    int *p = a;
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",p+i);

    int ser;

    printf("Enter Element to Search: ");
    scanf("%d",&ser);

    for(int i=0;i<n;i++)
    {
        if(*(p+i) == ser)
        {
            printf("Element Found!\n");
            ct++;
            return 0;
        }
    }
    if(ct == 0)
    {
        printf("Element Not Found!\n");
    }
    
}