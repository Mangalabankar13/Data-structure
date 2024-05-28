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
 printf("enter limit:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  newnode=(NODE *)malloc(sizeof(NODE));
  printf("\nenter value:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(head==NULL)
  {
   head=temp=newnode;
   head->next=head;
  }
  else
  {
   temp->next=newnode;
   temp=newnode; 
   newnode->next=head;
  }
 } 
 return head;
}
NODE *append(NODE *head,int n)
{
 NODE *newnode,*temp;
 int i,num;
 for(temp=head;temp->next!=head;temp=temp->next);
 for(i=0;i<n;i++)
 {
  printf("enter number:");
  scanf("%d",&num);
  newnode=(NODE *)malloc(sizeof(NODE));
  newnode->data=num;
  temp->next=newnode;
  temp=newnode;
 }
  temp->next=head;
  return head;
}   
void disp(NODE *head)
{
 NODE *temp=head;
 do
 {
  printf("%d\t",temp->data);
  temp=temp->next;
 }while(temp!=head);
}
void main()
{
 NODE *head=NULL;
 int ch,n;
 do
 {
  printf("\n1.create \n2.display \n3.append");
  printf("\nenter your choice:jhg");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:head=create(head);
          break;
   case 2:disp(head);
          break;
   case 3:printf("\nenter number of elements to append:");
          scanf("%d",&n);              
          head=append(head,n);
          break;
  }
 }while(ch<4);
}          



