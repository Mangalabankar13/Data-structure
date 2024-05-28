#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next,*prev;
}NODE;
NODE *create(NODE *head)
{
 int i,n;
 NODE *newnode,*temp;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(NODE *)malloc(sizeof(NODE));
  printf("enter value");
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
   newnode->prev=temp;
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
void main()
{
 NODE *head=NULL;
 int ch;
 do
 {
  printf("\nMENU \n1.create \n2.display");
  printf("\nenter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:head=create(head);
          break;
   case 2:disp(head);
          break;
  }
 }while(ch<3);
}                 
              
