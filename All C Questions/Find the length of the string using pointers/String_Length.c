//Find the length of the string using pointers.
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    char *p;
    printf("Enter your Name: ");
    scanf("%s",ch);

    int l=0;
    p = ch;
    while(*p != '\0')
    {
        p++;
        l++;
    }

    printf("Length of String = %d",l);
}