#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void selection(int a[50],int n)
{
 int i,min,index,j,t;
 for(i=0;i<n;i++)
 {
  min=a[i];
  index=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<min)
   {
    min=a[j];
    index=j;
   }
  }
  t=a[i];
  a[i]=a[index];
  a[index]=t;
 }   
 printf("\nsorted array:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void main()
{
 int a[50],n,i;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("random array:");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 selection(a,n);
}

    
