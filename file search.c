#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cities
{
 int scode;
 char cname[20];
}c1[20];
void main()
{
 FILE *fp1;
 int i,flag=0,mid,top,bottom,n;
 char name[20];
 fp1=fopen("sortedcities.txt","r");
 if(fp1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(fp1))
 {
  fscanf(fp1,"%s%d",&c1[i].cname,&c1[i].scode);
  i++;
 }n=i;
 printf("\nenter city name to search:");
 scanf("%s",&name);
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(c1[mid].cname,name)==0)
  { 
   flag=1;
   break;
  }
  if(strcmp(c1[mid].cname,name)<0)
   top=mid+1;
  else
   bottom=mid-1;
 }
 if(flag==1)
  printf("\nSTD code=%d",c1[mid].scode);
 else
  printf("\ncity not in the list");
  fclose(fp1); 
}
      
   
