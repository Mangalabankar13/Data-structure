#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
NODE *create(NODE *head)
{
 int n,i;
 NODE *newnode,*temp; 
 printf("enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(NODE *)malloc(sizeof(NODE));
  printf("enter number:");
  scanf("%d",&newnode->data);
  if(head==NULL)
  {
   head=temp=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
 } 
  return head;
}  
void display(NODE *head)
{
 int i;
 NODE *temp;
 for(temp=head;temp!=NULL;temp=temp->next)
 {
  printf("%d\t",temp->data);
 }
}
NODE *sort(NODE *head)
{
 int t;
 NODE *j,*i;
 for(i=head;i!=NULL;i=i->next)
 {
  for(j=head;j!=i;j=j->next)
  {
   if(i->data<j->data)
   {
    t=i->data;
    i->data=j->data;
    j->data=t;
   }
  }
 }
 return head;
}
void main()
{
 NODE *head=NULL;
 head=create(head);
 head=sort(head);
 printf("sorted list:"); 
 display(head);
} 
           
