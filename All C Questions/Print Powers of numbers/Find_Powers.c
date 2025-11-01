#include<stdio.h>
#include<math.h>

int main()
{
    int n,r,s=0;
    printf("Enter A Number: ");
    scanf("%d",&n);
    printf("Enter Range of Power: ");
    scanf("%d",&r); 
    printf("Power list:-\n");
    for(int i=1;i<=r;i++)
    {
        s=(int)pow(n,i);
        printf("%d^%d = %d\n",n,i,s);       // Type Casting because it returns value in Double data type 
    }
}