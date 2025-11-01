#include<stdio.h>
// Insert An Element Desired or Specific Position In An Array
int main()
{
    int a[5],d,p;
    printf("Enter 5 Elements: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter New Element: ");
    scanf("%d",&d);
    printf("\nEnter Position to modify: ");
    scanf("%d",&p);
    a[p-1]=d;
    printf("Modofied Elements: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}