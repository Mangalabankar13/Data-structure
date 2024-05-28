#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
NODE *create(NODE *head)
{
 NODE *newnode,*temp;
 int i,n;
 printf("\nenter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(NODE *)malloc(sizeof(NODE));
  printf("\nenter value:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(head==NULL)
  {
   head=newnode;
   temp=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
 } 
  return head;
}    
void disp(NODE *head)
{
 NODE *temp;
 for(temp=head;temp!=NULL;temp=temp->next)
 {
  printf("%d\t",temp->data);
 }
}
NODE *reverse(NODE *head)
{
 NODE *temp=head,*n=NULL;prev=NULL;
 while(temp!=NULL)
 {
  n=temp->next;
  temp->next=prev;
  prev=temp;
  temp=n;
 }
 head=prev;
 return head;
}
void main()
{
 NODE *head=NULL;
 head=create(head);
 head=reverse(head);
 disp(head);
} 
           
