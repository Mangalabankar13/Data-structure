#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
 int data;
 struct node *next;
}NODE;
int n;
NODE *create(NODE *head)
{
 int i;
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
NODE *sumavg(NODE *head)
{
 int sum=0,n=0;
 float avg;
 NODE *temp;
 for(temp=head;temp!=NULL;temp=temp->next)
 {
  sum=sum+temp->data;
  n++;
 }
 avg=(float)sum/n;
 printf("\nsum=%d",sum);
 printf("\naverage=%f",avg);
}
void main()
{
 NODE *head=NULL;
 head=create(head);
 sumavg(head);
}



