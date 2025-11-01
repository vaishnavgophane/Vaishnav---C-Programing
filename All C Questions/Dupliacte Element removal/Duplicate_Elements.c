/*#include<stdio.h>
int main()
{
  int n;
  printf("Enter Number of Elements: ");
  scanf("%d",&n);

  int a[n];
  printf("Enter %d Elements: ",n);
  for(int i = 0 ; i < n ; i++)
    scanf("%d",&a[i]);

  printf("Array wihtout Duplicate Elements: ");

  for(int i = 0 ; i < n ; i++)
  { 
    for(int j = i + 1 ; j < n ; j++)
    {
      if(a[i] == a[j])
      {
        //Shifting Elements
        for(int k = j ; k < n - 1 ; k++)
        {
          a[k] = a[k+1];
        }
        n--; //Reducing Size
      }
    }
  }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]); 
}
*/

#include<stdio.h>
int main()
{
  int n;
  printf("Enter Number of Elements in Array: ");
  scanf("%d",&n);

  int a[n];
  printf("Enter %d Elements: ",n);
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      //Checking For match
      if(a[i] == a[j])
      {
        //Shifting after finding match
        for(int k=j+1;k<n;k++)
        {
          a[k-1] = a[k];
        }
        n--;          // Reducing Size of Array after deleting Duplicate Elements
      }
    }
  }
}