#include<stdio.h>
int main()
{
    float h,b,a=0.5;
    float area;
    printf("Enter Height of Triangle: ");
    scanf("%f",&h);
    printf("Enter Base of Triangle: ");
    scanf("%f",&b);

    area = a * h * b;
    printf("Formula of Area of Triangle = [ 1/2 * Height * Base ]\n");
    printf("Area of Triangle = %f\n",area);
}