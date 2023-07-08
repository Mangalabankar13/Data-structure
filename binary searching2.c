//accept n employee information and accept employee name to search

#include<stdio.h>
#include<string.h>
struct emp
{
 int eno;
 char ename[50];
 float sal;
}e[100];
void main()
{
 int n,i,flag=0,top,mid,bottom;
 char name[20];
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter eno ename and salary=");
  scanf("%d%s%f",&e[i].eno,&e[i].ename,&e[i].sal);
 }
 printf("\nenter name to search=");
 scanf("%s",&name);
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(name,e[mid].ename)==0)
  {
   flag=1;
   break;
  }
  if(strcmp(name,e[mid].ename)>0)
  top=mid+1;
  else
  bottom=mid-1;
 }
 if(flag==1)
 {
  printf("\nemployee number=%d",e[mid].eno);
  printf("\nemployee salary=%f",e[mid].sal);
 }
 else
 {
 printf("\nrecord is not found");
 }
}        
