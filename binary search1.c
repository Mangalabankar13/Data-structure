//create a structure employee accept n employee info and accept employee number to search

#include<stdio.h>
struct emp
{
 int eno;
 char ename[50];
 float sal;
}e[100];
void main()
{
 int n,i,flag=0,top,mid,bottom,num;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter eno ename and salary=");
  scanf("%d%s%f",&e[i].eno,&e[i].ename,&e[i].sal);
 }
 printf("\nenter no to search=");
 scanf("%d",&num);
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(num==e[mid].eno)
  {
   flag=1;
   break;
  }
  if(num>e[mid].eno)
  top=mid+1;
  else
  bottom=mid-1;
 }
 if(flag==1)
 {
  printf("\nemployee name=%s",e[mid].ename);
  printf("\nemployee salary=%f",e[mid].sal);
 }
 else
 {
 printf("\nrecord is not found");
 }
}  
