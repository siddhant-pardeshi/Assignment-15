//Write a function in C to read n number of values in an array and display it in reverse order

#include <stdio.h>

void printreverse(int a[],int size)
 {
 int i;
 printf("Elements in reverse order are :\n");
  for(i=size-1;i>=0;i--)
  {
      printf("%d\n",a[i]);
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
 printreverse(a,n);

 return 0;
 }
