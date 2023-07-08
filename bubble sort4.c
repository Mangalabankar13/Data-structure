//bubble sort-create a structure student and sort descending order of percentage

#include<stdio.h>
struct stud
{
 int rno;
 char sname[20];
 int per;
}s[100],t;
void main()
{
 int n,i,pass;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter rno name per");
  scanf("%d%s%d",&s[i].rno,&s[i].sname,&s[i].per);
 }
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(s[i].per<s[i+1].per)
   {
    t=s[i];
    s[i]=s[i+1];
    s[i+1]=t;
   }
  }
 }
 printf("\nsorted order student info \n");
 for(i=0;i<n;i++)
 printf("\n%d\t%s\t%d",s[i].rno,s[i].sname,s[i].per);
}       
