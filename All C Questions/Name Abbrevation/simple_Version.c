#include<stdio.h>

int main()
{
    char fn[10],mn[10],ln[10];
    printf("Enter First Name: ");
    scanf("%s",&fn);
    printf("Enter Middle Name: ");
    scanf("%s",&mn);
    printf("Enter Last Name: ");
    scanf("%s",&ln);

    printf("-------------------Abbreviated From------------------\n");
    printf("%c.",fn[0]);
    printf("%c.",mn[0]);
    printf("%s",ln);
}