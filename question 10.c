//Write a function in C to count the frequency of each element of an array

#include <stdio.h>

void printfrequency(int a[],int size)
 {
 int hash[100]={0},i;

  for(i=0;i<size;i++)
  {
      hash[a[i]]++;
  }
  printf("Frequency of each elements in the array are : \n");
  for(i=0;i<size;i++)
  {
   if (hash[i] != 0)
      printf("%d is repeated %d times\n",i,hash[i]);
  }
  return;
 }
int main()
{
int i,j;

int a[10];

printf("Enter 10 elements of array : \n");
for(i=0;i<10;i++)
 {
 scanf("%d",&a[i]);
 }

printfrequency(a,10);

return 0;

}
