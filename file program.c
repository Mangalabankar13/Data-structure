#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 FILE *fp1;
 int flag=0,scode;
 char name[20],s1[20];
 fp1=fopen("cities.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 printf("\nenter city name to search:");
 scanf("%s",&s1);
 while(!feof(fp1))
 {
  fscanf(fp1,"%s%d",&name,&scode);
  if(strcmp(name,s1)==0)
  {
   flag=1;
   break;
  }
 }
 fclose(fp1);
 if(flag==1)
 {
  printf("\ncity is found STD code=%d",scode);
 }   
 else
  printf("\ncity not in the list");      
}


