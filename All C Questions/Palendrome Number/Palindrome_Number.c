#include<stdio.h>
int main()
{
    int a,rim,org,rev=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    org = a;                                 // Original Number is saved safely
    while(a != 0)
    {
        rim = a % 10;
        rev = rev * 10 + rim;
        a /= 10;
    }
    if(org==rev)
    {
        printf("%d is a Palindrome Number!",org);
    }
    else{
        printf("%d is not a Plindrome number!",org);
    }
}