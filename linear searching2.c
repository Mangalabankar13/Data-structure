#include<stdio.h>
struct stud
{
 int rno;
 char name[20];
 float per;
}s[100];
void main()
{
 int i,n,flag=0,num;
 printf("enter limit");
 scanf("%d",&n);
 printf("\nenter rollno name percentage");
 for(i=0;i<n;i++)
 {
  scanf("%d%s%f",&s[i].rno,&s[i].name,&s[i].per);
 }
 printf("\nenter roll number to search");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  if(s[i].rno==num)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
 {
 printf("\nname=%s",s[i].name);
 printf("\nper=%f",s[i].per);
 }
 else
 {
  printf("record not found");
 }
 
 
 
 
}      
