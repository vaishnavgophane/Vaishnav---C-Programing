// Copy one array to another using pointer.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int source[n],destination[n];
    int *p=source;
    int *q=destination;
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d", p+i);
    
    for(int i=0;i<n;i++)
    {
        *(q+i) = *(p+i); 
    }

    for(int i=0;i<n;i++)
        printf("%d ",*(q+i));

    return 0;
}