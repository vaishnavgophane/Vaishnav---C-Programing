#include<stdio.h>
int main()
{
    char a;
    printf("Enter a Element: ");
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<= 'z')
    {
        printf("Element is a Alphabet!");
    }
    else 
    {
        printf("Element is not a Aplhabet!");
    }
}