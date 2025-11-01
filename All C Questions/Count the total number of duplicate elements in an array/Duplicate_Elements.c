#include<stdio.h>
int main()
{
    int n,c=0,i=0,j=0;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    printf("There are Total %d Duplicate Elements",c);

}