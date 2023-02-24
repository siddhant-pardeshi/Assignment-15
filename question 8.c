////Write a function in C to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)

#include <stdio.h>

void printunique(int a[],int size)
 {
 int hash[100]={0},i;

  for(i=0;i<size;i++)
  {
      hash[a[i]]++;
  }
  printf("Unique elements in the array are : \n");
  for(i=0;i<size;i++)
  {
      if(hash[i] == 1)
      printf("%d\n",i);
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

printunique(a,10);

return 0;

}
