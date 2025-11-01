#include<stdio.h>
#include<string.h>

int main()
{
    char f[20]; 
    char v[3]; // Three letters + '\0'
    int i=0,j=0;
    puts("Enter Your Full Name: ");
    gets(f);
    
    //Logic
    for(int i=0;f[i]!='\0';i++)
   // for(int i=f[0];i<=f[20];i++)
    {
        if(f[i]>='A' && f[i]<='Z')
        {
            v[j]==f[i];
            j++;
            if(j==3)
            {
                break;
            }
        }
    }
    v[j+3]='\0';
    printf("%c.%c.%c",v[j],v[j+1],v[j+2]);

}
