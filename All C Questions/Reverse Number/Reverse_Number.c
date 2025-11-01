#include<stdio.h>
int main()
{
    int a,org,rev=0,rim;
    printf("Enter a Number: ");
    scanf("%d",&a);
    org=a;
    while(a != 0)
    {
        rim = a % 10;
        rev = rev * 10 + rim;
        a /=10;
    }
    if(org % 10 == 0)
    {
        
        while( org % 10 == 0)
        {
            printf("0");
            org /= 10;
        }
        printf("%d : Reverse Order",rev);
    }
    else
    {
        printf("Reverse Order: %d",rev);
    }

}