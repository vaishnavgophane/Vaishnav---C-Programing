#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d",&year);
    if(year % 4 == 0)
    {
       printf("It is a Leap Year!");
    }
    else if(year % 100 == 0)
    {
        printf("It is a Leap Year!");
    }
    else 
    {
        printf("It is a Non-Leap Year!");
    }
}