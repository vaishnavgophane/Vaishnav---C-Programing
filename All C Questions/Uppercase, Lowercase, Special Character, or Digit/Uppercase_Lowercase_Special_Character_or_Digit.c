#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Element: ");
    scanf(" %c",&a);
    if(isupper(a))
    {
        printf("Element is Uppercase Alphabet!");
    }
    else if(islower(a))
    {
        printf("Element is Lowercase Element!");
    }
    else if(isdigit(a))
    {
        printf("Element is a Digit!");
    }
    else{
        printf("Element is Special Character!");
    }
}