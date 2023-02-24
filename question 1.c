//Write a function to find the greatest number from the given array of any size. (TSRS)

#include <stdio.h>

int greatest(int a[],int size)
 {
 int i,max;
  max = a[0];

  for(i=0;i<size;i++)
  {
      if (max < a[i]);
         max = a[i];
  }
  return max;
 }
int main()
{
int i,j,n;

printf("Enter the size of array : \n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of array : \n");
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }

printf("Greatest number in the array is %d ",greatest(a,n));

return 0;

}
