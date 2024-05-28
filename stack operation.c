#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
struct stack
{
 int a[max];
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
 if(s.top==max-1)
   return 1;
 else
   return 0;
}
void push(int num)
{
 if(isfull())
  printf("stack is full");
 else
 {
  s.top++;
  s.a[s.top]=num;
 }
}
int pop()
{
 int val;
 if(isempty())
  printf("stack is empty");
 else
 {
  val=s.a[s.top];
  s.top--;
  return val;
 }
}
int main()
{
 char s1[100];
 int a,b,c,d,i,res,val1,val2;
 printf("\nenter postfix expression:");
 fgets(s1,100,stdin);
 printf("\nenter value of abcd:");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 init();
 for(i=0;s1[i]!='\0';i++)
 {
  if(isalpha(s1[i]))
  {
   switch(s1[i])
   {
    case 'a':push(a);
             break;
    case 'b':push(b);
             break;
    case 'c':push(c);
             break;
    case 'd':push(d);
             break;
   }
  }
  else
  {
   val1=pop();
   val2=pop();   
   switch(s1[i])
   {
    case '+':res=val2+val1;
             break;   
    case '-':res=val2-val1;
             break;   
    case '*':res=val2*val1;
             break;   
    case '/':res=val2/val1;
             break;   
   }           
   push(res);
  }     
 }               
  printf("\nresult=%d",pop());
}      
      
            
                                                              
