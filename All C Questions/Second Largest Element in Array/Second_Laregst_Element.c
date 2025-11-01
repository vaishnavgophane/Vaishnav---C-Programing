#include<stdio.h>
int main()
{
    int n,max,smax=0,min;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    min = a[0];
    smax = a[0];
    for(int i=0;i<n;i++)  // For Largest Element
    {
        if(max < a[i])
        {
            max = a[i];
            smax = a[i-1];                        
        }
    }
    for(int i=0;i<n;i++)  // For Smallest Element
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("Max Element: %d\n",max);
    printf("Min Element: %d\n",min);
    for(int i=max-1;i>=min;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(i == a[j])
            {
                smax = i;
                printf("Second Largest Element = %d\n",smax);
                return 0;
            }
        }
    }
}