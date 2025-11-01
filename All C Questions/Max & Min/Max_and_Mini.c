#include<stdio.h>
int main()
{
    int a[5];
    
    printf("Enter five Elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    // Maximum
    for(int i=0;i<5;i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    // Minimun
    for(int i=0;i<5;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
}
    printf("Maximum value in Array = %d\n Minimum Value in Array = %d\n",max,min);
    return 0;   
}