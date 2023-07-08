//bubble sort-create structure student and sort ascending order of name

#include<stdio.h>
#include<string.h>
struct stud
{
 int rno;
 char name[20];
 int per;
}s[50],t;
void main()
{
 int i,pass,n;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nenter rollno name per");
  scanf("%d%s%d",&s[i].rno,&s[i].name,&s[i].per);
 }
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(strcmp(s[i].name,s[i+1].name)>0)
   {
    t=s[i];
    s[i]=s[i+1];
    s[i+1]=t;
   }
  }
 }
 printf("student info in sorting order\n");
 for(i=0;i<n;i++)
 printf("\n%d\t%s\t%d",s[i].rno,s[i].name,s[i].per);
}     
