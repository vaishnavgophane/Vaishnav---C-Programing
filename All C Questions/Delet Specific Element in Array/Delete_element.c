#include<stdio.h>
// Delete Element From Array At Desired Or Specific Position
int main()
{
    int a[10],n,del;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements Entered: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter Position of Element to deleted: ");
    scanf("%d",&del);

    for(int i=0;i<n;i++)
    {
        if(del==a[i])
        {
            for(int j=i+1;j<n;j++)
            {
                a[j-1]=a[j];
            }
            n--;
        }
    }
    printf("Remaining elements: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}