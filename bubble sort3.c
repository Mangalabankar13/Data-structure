//bubble sort-accept n numbers and display sorted order

#include<stdio.h>
void main()
{
 int i,n,pass,t,a[20];
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n element");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(a[i]>a[i+1])
   {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
 }
 printf("\nsorted number");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}     
