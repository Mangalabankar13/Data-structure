//C program to find largest pair sum in an unsorted array
(hint:find 2 maximum elements from array and then find the sum of both numbers)

#include<stdio.h>
void main()
{
 int a[50],i,n,max1,max2,sum=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter array element");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max1=a[0];
 for(i=0;i<n;i++)
 {
  if(max1<a[i])
  max1=a[i];
 }
 printf("\nenter first max no=%d",max1);
 max2=a[0];
 for(i=0;i<n;i++)
 {
  if(max2<a[i])
  {
   if(a[i]!=max1)
   max2=a[i];
  }
 } 
 printf("\nenter second max no=%d",max2);
 sum=max1+max2;
 printf("\nsum=%d",sum);
}  
