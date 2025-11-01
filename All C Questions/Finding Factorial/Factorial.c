#include<stdio.h>
int main()
{
    int a,fac=1;
    printf("Enter a Number: ");
    scanf("%d",&a);
    //fac = a;
    if(a<=0)
    {
        printf("Enter a positive Number!");
        return 0;
    }
    for(int i=1;i<=a;i++)
    {
        fac = fac*i;
    }
    printf("Factorial of %d! = %d",a,fac);
}