#include<stdio.h>
#include<string.h>
void main()
{
 char s1[30][30],name[10];
 int n,i,flag=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("\nenter student name");
 for(i=0;i<n;i++)
 scanf("%s",&s1[i]);
 printf("\nenter name to search");
 scanf("%s",&name);
 for(i=0;i<n;i++)
 {
  if(strcmp(s1[i],name)==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
 printf("\nname is found");
 else
 printf("\nname is not found");
}   
 
