#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&a);
    sum = ( a * ( a+1 ) ) / 2;
    printf("Sum of Natrual Number = %d",sum);
}