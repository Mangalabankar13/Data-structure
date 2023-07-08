//bubble sort-accept n cities name from user and sort alphabetical order

#include<stdio.h>
#include<string.h>
void main()
{
 int pass,i,n;
 char s1[20][20],t[20];
 printf("enter limit");
 scanf("%d",&n);
 printf("\nenter cities name");
 for(i=0;i<n;i++)
 scanf("%s",&s1[i]);
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(strcmp(s1[i],s1[i+1])>0)
   {
    strcpy(t,s1[i]);
    strcpy(s1[i],s1[i+1]);
    strcpy(s1[i+1],t);
   }
  }
 } 
 printf("sorted cities name \n");
 for(i=0;i<n;i++)
 printf("\n%s",s1[i]);
}  
