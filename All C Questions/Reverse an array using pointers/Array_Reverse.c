//Reverse an array using pointers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n],temp[n];
    int *p = a;

    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",p+i);
    
    //Array Reversal
    for(int i=0;i<n/2;i++)
    {
        temp[i] = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp[i];
    }
    printf("Array Reversed: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}