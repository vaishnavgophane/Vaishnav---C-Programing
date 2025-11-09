// Count the frequency of each Character in String
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int frq[256] = {0};

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    // Count Logic
    for(int i = 0; str[i] != '\0'; i++)
    {
        unsigned char ch = str[i];
        if(ch != '\0' && ch != ' ')
        {
            frq[ch]++;
        }
    }
    printf("Character Frequency: \n");

    for(int i=0; i < 256; i++)
    {
        if(frq[i] > 0)
        {
            printf("'%c' -> %d times\n",i,frq[i]);
        }
    }
    return 0;
} 