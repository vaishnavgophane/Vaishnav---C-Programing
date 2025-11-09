// Check if string is Palandrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a String: ");
    scanf("%s",str);

    char org[100];

    int n = strlen(str);  // Store length of string

    // Copy orignal string in another memmory
    strcpy(org,str);

    // Reversal of String Using Swapping Logic 
    for(int i=0;i< n/2;i++)
    {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1]= temp;
    }
    // Checking element by element
    if(strcmp(org,str)==0)
    {
        printf("String is Palandrome!");
    }
    else{
        printf("String is not Palandrome!");
    }

    return 0;
}