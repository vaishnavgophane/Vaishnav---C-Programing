#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("Enter Radius of Circle: ");
    scanf("%d",&r);
    int a = pi*(r*r);
    printf("Area of Circle: %dcm\xB2\n",a);
}