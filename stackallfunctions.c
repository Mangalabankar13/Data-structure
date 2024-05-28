#include<stdio.h>
#define max 50
struct stack
{
 int a[max];
 int top;
}s;
void init()
{
 s.top=-1;
}
int isfull()
{
 if(s.top==max-1)
  return 1;
 else
  return 0;
}
int isempty()
{
 if(s.top==-1)
  return 1;
 else
  return 0;
}
void push(int num)
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
  printf("\nstack is empty...don't pop");
 else
 {
  val=s.a[s.top];
  s.top--;
  printf("\npoped value=%d",val);
 }
}
void disp()
{
 int i;
 for(i=s.top;i>=0;i--)
 printf("%d\n",s.a[i]);
} 
void peek()
{
 printf("last element=%d",s.a[s.top]);
}
void main()
{
 int ch,num;
 init();
 do
 {
  printf("\n1.isfull \n2.isempty \n3.push \n4.pop \n5.disp \n6.peek");
  printf("\nenter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:if(isfull()==1)
          printf("stack is full");
         else
          printf("stack is not full");
          break;
   case 2:if(isempty()==1)
          printf("stack is empty");
         else
          printf("stack is not empty");
          break;        
   case 3:printf("enter number:");
          scanf("%d",&num);
          push(num);
          break;
   case 4:pop();
          break;
   case 5:disp();
          break;
   case 6:peek();
          break;
  }
 }while(ch<7);
}                                  
           
