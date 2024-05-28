#include<stdio.h>
#define MAX 50
struct stack
{
 int a[MAX];
 int top;
}s;
void init()
{
 s.top=-1;
}
int isempty()
{
 if(s.top==-1)
  return 1;
 else
  return 0;
}
int isfull()
{
 if(s.top==MAX-1)
  return 1;
 else
  return 0;
}
void push(struct stack s1,int num)
{
 if(isfull())
  printf("stack is full...don't push");
 else
 {
  s.top++;
  s.a[s.top]=num;
 }
}
void pop()
{
 int val;
 if(isempty())
  printf("stack is empty...don't pop");
 else
 {
  val=s.a[s.top];
  s.top--;
 }
}
void disp()
{
 int i;
 for(i=s.top;i>=0;i--)
 {
  printf("%d\n",s.a[i]);
 }
}
int main()
{
 int i,n,num;
 struct stack s1,s2,temp;
 init(s1);
 init(s2);
 init(temp);
 printf("enter limit of stack:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter val:");
  scanf("%d",&num);
  push(s1,num);
 }
 for(i=s1.top;i>0;i--)
 {
  push(temp,s1.a[i]);
 }
 for(i=temp.top;i>0;i--)
 {
  push(s2,temp.a[i]);
 }
 printf("\noriginal stack:");
 disp(s1);
 printf("\ncopy stack");
 disp(s2);
}


