//Write a function to find the first occurrence of adjacent duplicate values in the array.Function has to return the value of the element

#include <stdio.h>

void printadjacent(int a[],int size)
 {
 int i,j;
 printf("Duplicate Elements are :\n");
  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(a[i] == a[j])
      printf("%d\n",a[i]);
    }
  }
  return;
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
 printadjacent(a,n);

 return 0;
 }
