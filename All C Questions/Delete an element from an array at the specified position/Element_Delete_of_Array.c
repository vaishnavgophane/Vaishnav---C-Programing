//Delete an element from an array at the specified position.
#include<stdio.h>
int main()
{
    int n,pos=0,cnt=0;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Enter Position to Delete: ");
    scanf("%d",&pos);


    if( pos < 1 || pos > n)
    {
        printf("Invalid Position!");
    }
    else {
    for(int i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;

    printf("Element deleted!\n");
    printf("New Arrey : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    }
}






















#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Position to delete: ");
    scanf("%d",&pos);

    //Check if position is valid or not?
    if(pos < 1 || pos > n)
    {
        printf("Enter Valid Position!");
        scanf("%d",&pos);
    }
    else{
        for(int i= pos-1;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
    }
    n--;
    printf("Element Deleted Sucessfully!\n");
    printf("Updated Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}