//Count occurrences of a character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    int cnt=0;
    char s;
    printf("Enter Your Name: ");
    fgets(c,sizeof(c),stdin);

    printf("%s ",c);
    scanf("%c",&s);

    
    for(int i=0;c[i]!='\0';i++)
    {
        if(s == c[i])
        {
            cnt++;
        }
    }
    printf("Character %c Occured %d times.",s,cnt);
    return 0;
}