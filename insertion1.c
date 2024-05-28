#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void insertion(int a[50],int n)
{
 int i,j,num,t;
 for(i=1;i<n;i++)
 {
  num=a[i];
  for(j=i-1;j>=0 && num<a[j];j--)
  {
   t=a[j+1];
   a[j+1]=a[j];
   a[j]=t;
  }
 }
 printf("\nsorted array:\n");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void main()
{
 int a[50],n,i;
 printf("enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("random array:");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
 insertion(a,n);
}

    
