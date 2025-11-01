#include<stdio.h>

int main()
{
    int n,c=0;
    printf("Enter number of Elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Unique Elements: ");
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }  
        }
        if(c == 1)
        {
            printf("%d ",a[i]);
        }
    }
}