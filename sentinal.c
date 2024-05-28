#include<stdio.h>
void sentinal(int a[50],int n)
{
 int key,i=0;
 printf("enter key value");
 scanf("%d",&key);
 a[n]=key;
 while(a[i]!=key)
 {
  i++;
 }
 if(i==n)
  printf("number is not found");
 else
  printf("number is found at position=%d",i);
}
void main()
{
 int a[50],n,i;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter array element");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 sentinal(a,n);
}     


