//Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>

int smallest(int a[],int size)
 {
 int i,min;
  min = a[0];

  for(i=0;i<size;i++)
  {
      if (min > a[i]);
         min = a[i];
  }
  return min;
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

printf("smallest number in the array is %d ",smallest(a,n));

return 0;

}
