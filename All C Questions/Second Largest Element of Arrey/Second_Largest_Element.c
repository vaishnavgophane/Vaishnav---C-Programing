#include<stdio.h>
int main()
{
    int a[10],x,y,n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x = a[0];
    //y = a[1];
    for(int i=0;i<n;i++)
    {
        if(x > a[i])
        {
            x = y;
            y = a[i];
        }
    }
    





    // for(int i=0;i<5;i++)
    // {
    //     if(max < a[i])
    //     {
    //         max = a[i];
    //     }
    // }
    // for(int i=max-1;i<0;i--)
    // {
    //     for(int j=n;i<=0;j--)
    //     if(lmax < max && lmax > a[j])
    //     {
    //         lmax = a[j];
    //     }
    // }
    // printf("Second Largest Elemant = %d\n",lmax);
}