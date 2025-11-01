#include<stdio.h>
int main()
{
    int a,b,c=0;
    int x[100],y[100];
    printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);
    for(int i=0;i<100;i++)
    {
        x[i]=a*i;
        y[i]=b*i;
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            if(x[i]==y[j])
            {
                c=x[i];
                if(x[i]>0)
                {
                    //c=x[i];
                    printf("LCM of %d and %d = %d",a,b,c);
                    return 0;
                }
            }
        }
    }
}