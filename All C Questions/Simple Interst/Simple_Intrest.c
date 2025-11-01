#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter principle Amount: ");
    scanf("%d",&p);
    printf("Enter Rate of Intreast: ");
    scanf("%d",&r);
    printf("Enter Number of Years: ");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("Amount of Intrest =%d\n",si);
    printf("Total Amount after %d Years will be Rs %d/-",t,si+p);

}