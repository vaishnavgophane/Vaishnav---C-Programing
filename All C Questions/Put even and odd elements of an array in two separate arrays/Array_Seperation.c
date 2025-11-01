//Put even and odd elements of an array in two separate arrays.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    int even[n],odd[n],en=0,on=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            en++;
            even[en] = a[i];
        }
        else{
            on++;
            odd[on] = a[i];
        }
    }
    printf("Total Number of Even Numbers in Array = %d\n",en);
    printf("Total Number of Odd Numbers in Array = %d\n",on);
    printf("Even Numbers in Array: ");
    for(int i=1;i<=en;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("Odd Numbers in Array: ");
    for(int i=1;i<=on;i++)
    {
        printf("%d ",odd[i]);
    }
    

}