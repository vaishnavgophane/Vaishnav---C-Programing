#include<stdio.h>
#define size 5
int main()
{
    int a[size],sum=0;
    printf("Enter %d Elements: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum +=a[i]; 
    }
    printf("Sum of all Elements in array = %d",sum);
    return 0;
}