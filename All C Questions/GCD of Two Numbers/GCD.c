#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two Positive Integrs: ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            c = i;
        }
    }
    printf("GCD of %d and %d = %d",a,b,c);

}