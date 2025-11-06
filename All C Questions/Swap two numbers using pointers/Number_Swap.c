// Swap two numbers using pointers.
#include<stdio.h>
int main()
{
    int a,b;
    int *p=&a;
    int *q=&b;
    printf("Enter Value of A = ");
    scanf("%d",&a);
    printf("Enter Value of B = ");
    scanf("%d",&b);

    printf("Before Swaping A = %d & B = %d\n",*p,*q);
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("After Swaping A = %d & B = %d\n",*p,*q);

}