//Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )


#include<stdio.h>

int rotate(int a[],int size)
{
int n,d,i,j,temp;
printf("Enter 1 to rotate right or 0 to rotate left : ");
scanf("%d",&d);
printf("Enter by how many positions : \n");
scanf("%d",&n);

if(d==1)
for(j=0;j<n;j++)
{ temp=a[size-1];
   for(i=size-1;i>=0;i--)
   {
     a[i]=a[i-1];
   }
   a[0] = temp;
}

if(d==0)
for(j=0;j<n;j++)
{ temp=a[0];
   for(i=0;i<size;i++)
   {
     a[i]=a[i+1];
   }
   a[size-1] = temp;
}
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
 rotate(a,n);

 printf("Array after rotation is ; \n");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }

 return 0;
 }
