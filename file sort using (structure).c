#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
 char ename[20];
 int age,sal;
}e1[100],t;
void bubble(struct emp e1[],int n)
{
 int pass,i;
 for(pass=1;pass<n;pass++)
 {
  for(i=0;i<n-pass;i++)
  {
   if(strcmp(e1[i].ename,e1[i+1].ename)>0)
   {
    t=e1[i];
    e1[i]=e1[i+1];
    e1[i+1]=t;
   }
  }
 }
 printf("\nbubble sort:\n");
 for(i=0;i<n;i++)
 {
  printf("\n%s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
 }
}
void insertion(struct emp[],int n)
{
 int i,j;
 char key[20];
 for(i=1;i<n;i++)
 {
  strcpy(key,e1[i].ename);
  for(j=i-1;j>=0&&strcmp(key,e1[j].ename)<0;j--)
  {
   t=e1[j+1];
   e1[j+1]=e1[j];
   e1[j]=t;
  }
 }
 printf("\ninsertion sort:\n");
 for(i=0;i<n;i++)
 {
  printf("\n%s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
 }
}
void selection(struct emp[],int n)
{
 char min[20];
 int i,j,index;
 for(i=0;i<n;i++)
 {
  strcpy(min,e1[i].ename);
  index=i;
  for(j=i+1;j<n;j++)
  {
   if(strcmp(e1[j].ename,min)<0)
   {
    strcpy(min,e1[j].ename);
    index=j;
   }
  }
  t=e1[i];
  e1[i]=e1[index];
  e1[index]=t;
 }
 printf("\nselection sort:\n");
 for(i=0;i<n;i++)
 {
  printf("\n%s\t%d\t%d",e1[i].ename,e1[i].age,e1[i].sal);
 }
}
int main()
{
 FILE *f1;
 int i=0,n;
 f1=fopen("emp3.txt","r");
 if(f1==NULL)
 {
  printf("file not found");
  exit(0);
 }
 while(!feof(f1))
 {
  fscanf(f1,"%s%d%d",&e1[i].ename,&e1[i].age,&e1[i].sal);
  i++;
 }
 n=i-1;
 bubble(e1,n);
 insertion(e1,n);
 selection(e1,n);
 fclose(f1);
}           


    
