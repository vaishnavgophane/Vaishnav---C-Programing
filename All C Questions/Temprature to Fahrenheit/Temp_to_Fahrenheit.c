#include<stdio.h>
//Lets Calculate Temperature to Fahrenheit
int main()
{
    float c=0,f=0;
    char d=176;
    printf("Enter Temperature in Celcius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in Fahrenheit = %f\u00B0C. \n",f);       //n\u00B0C. Code fro printing degree symbol
}