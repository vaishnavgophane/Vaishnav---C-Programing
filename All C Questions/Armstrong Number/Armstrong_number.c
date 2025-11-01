#include<stdio.h>
//Armstrong Number
int main()
{
    int a,c=0,org,rim,rs=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    org = a;
    while(org != 0)
    {
        org/=10;
        c++;
    }
    //------------------------------------------------------------ Counts Right
    org = a;
    while(a !=0 )
    {
        rim = a%10;
        rs=rs+(rim*rim*rim);
        a/=10;
    }
    if(org==rs)
    {
        printf("%d is a Armstrong Number!",org);
    }
    else
    {
        printf("%d is not a Armstrong Number!",org);
    }
}