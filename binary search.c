//binary search-accept n cities name and accept a city to search

#include<stdio.h>
#include<string.h>
void main()
{
 char city[50][50],scity[20];
 int flag=0,mid,n,i,top,bottom;
 printf("enter limit");
 scanf("%d",&n);
 printf("\nenter n cities name");
 for(i=0;i<n;i++)
 scanf("%s",&city[i]);
 printf("\nenter city name to search");
 scanf("%s",&scity);
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(city[mid],scity)==0)
  {
   flag=1;
   break;
  }
  if(strcmp(scity,city[mid])>0)
  top=mid+1;
  else
  bottom=mid-1;
 }
 if(flag==1)
 printf("\ncity is found");
 else
 printf("\ncity is not found");
}   
