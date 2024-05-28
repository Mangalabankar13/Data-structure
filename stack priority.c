#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define max 50
struct stack
{
 char a[max];
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
void push(char c)
{
 if(isfull())
  printf("stack is full...don't push");
 else  
 {
  s.top++;
  s.a[s.top]=c;
 }
}
char pop()
{
 char ch;
 if(isempty())
  return -1;
 else
 {
  ch=s.a[s.top];
  s.top--;
  return ch;
 }
}
int priority(char c)
{
 if(c=='(')
  return 0;
 if(c=='+'||c=='-')
  return 1;
 if(c=='*'||c=='/')
  return 2;
 if(c=='$'||c=='^')
  return 3;
 return 0; 
}
void main()
{
 char s1[50],c;
 int i;
 printf("\nenter infix expression");
 scanf("%s",&s1);
 init();
 for(i=0;s1[i]!='\0';i++)
 {
  if(isalpha(s1[i]))
   printf("%c",s1[i]);
  else if(s1[i]=='(')
   push(s1[i]);
  else if(s1[i]==')')
  {
   while((c=pop())!='(')
    printf("%c",c);
  }  
  else
  {
   while(priority(s.a[s.top])>=priority(s1[i]))
   { 
    printf("%c",pop());
   }
   push(s1[i]);
  } 
 }
 while(!isempty())
 {
  printf("%c",pop());
 }
}    
           
