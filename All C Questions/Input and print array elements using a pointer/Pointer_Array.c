// Input and print array elements using a pointer.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",p+i);

    for(int i=0;i<n;i++)
        printf("%d ",*(p+i));
}