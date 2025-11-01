#include<stdio.h>
int sumofArray(int arr[],int n)
{
    //Base comdition
    if(n==0)
    {
        return 0;
    }
    //Addition
    return arr[n-1] + sumofArray(arr,n-1);
}

int main()
{
    int n;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = sumofArray(arr,n);
    printf("Sum of All elements = %d\n",sum);
}

