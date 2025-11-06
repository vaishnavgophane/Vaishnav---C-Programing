// Swap two arrays using pointers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number od Elements: ");
    scanf("%d",&n);

    int a[n],b[n],temp[n];
    int *p = a;
    int *q = b;

    printf("Enter %d Elements of Array A: ",n);
    for(int i=0;i<n;i++)
        scanf("%d", p+i);
    
    printf("Enter %d Elements of Array B: ",n);
    for(int i=0;i<n;i++)
        scanf("%d", q+i);

    printf("Swapping.......\n");
    //Array Swapping
    for(int i=0;i<n;i++)
    {
        temp[i] = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp[i];
    }
    printf("Array's After Swaping: \n");
    printf("Array A = ");
    for(int i=0;i<n;i++)
        printf("%d ",*(p+i));

    printf("\nArray B = ");
    for(int i=0;i<n;i++)
        printf("%d ",*(q+i));
}