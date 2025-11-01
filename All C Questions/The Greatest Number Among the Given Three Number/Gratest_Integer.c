#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is Gratest Elements!\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is Gratest Element!",b);
    }
    else{
        printf("%d is the Gratest Element!",c);
    }
}