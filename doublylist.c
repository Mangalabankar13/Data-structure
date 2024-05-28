#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next,*prev;
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
NODE *search(NODE *head,num)
{
 struct node *temp;
 int i;
 for(temp=head,i=1;temp!=NULL;temp=temp->next,i++)
 {
  if(temp->data>num)
   return i;
 }
 return i;
}
NODE *insert(NODE *head,int pos,int num)
{
 NODE *newnode,*temp;
 int i;
 newnode=(NODE *)malloc(sizeof(NODE));
 newnode->data=num;
 if(pos==1)
 {
  newnode->next=head;
  head->prev=newnode;
  head=newnode;
 }
 else
 {
  for(temp=head,i=1;temp->next!=NULL&&i<(pos-1);
  temp=temp->next,i++);
  newnode->next=temp->next;
  temp->next->prev=newnode;
  temp->next=newnode;
  newnode->prev=temp;
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
 int num,pos,ch;
 do
 {
  printf("\n1.create \n2.insert \n3.display");
  printf("\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:head=create(head);
          break;
   case 2:printf("\nenter number:");
          scanf("%d",&num);
          pos=search(head,num);
          head=insert(head,pos,num);
          break;
   case 3:disp(head);
          break;
  }
 }while(ch<4);
}                                     
