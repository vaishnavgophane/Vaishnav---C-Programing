#include<stdio.h>
int cube(int a)
{
    int cube = a*a*a;
    return cube;
}
int main()
{
    int a;
    printf("Enter a Number to Find its Cube: ");
    scanf("%d",&a);
    printf("Cube of %d = %d",a,cube(a));
}
