//menu driven program-even position sum and odd position sum of array element

#include<stdio.h>
void main()
{
 int a[100],i,n,ch,sum;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter elements of array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 do
 {
  sum=0;
  printf("\n menu");
  printf("\n 1.even position sum");
  printf("\n 2.odd position sum");
  printf("\n enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:for(i=0;i<n;i++)
          {
           if(i%2==0)
           sum=sum+a[i];
          }
          printf("\neven position sum=%d",sum);
          break;
   case 2:for(i=0;i<n;i++)
          {
           if(i%2!=0)
           sum=sum+a[i];
          }
          printf("\nodd position sum=%d",sum);
          break;
   default:printf("\ninvalid choice");
  }
 }while(ch<3);
}            
