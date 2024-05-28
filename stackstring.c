#include<stdio.h>
#define max 100
struct stack
{
 char a[max];
 int top;
}s1;
void init()
{
 s1.top=-1;
}
int isfull()
{
 if(s1.top==max-1)
  return 1;
 else
  return 0;
}
int isempty()
{
 if(s1.top==-1)
  return 1;
 else
  return 0;
}
void push(char c)
{
 if(isfull())
   printf("stack is full");
 else
  {
   s1.top++;
   s1.a[s1.top]=c;
  } 
} 
char pop()
{
 char ch;
 if(isempty())
  printf("stack is empty");
 else
 {
  ch=s1.a[s1.top];
  s1.top--;
  return ch;
 }
}
void main()
{
 char s[20],c;
 int i;
 printf("enter string");
 scanf("%s",&s);
 init();
 for(i=0;s[i]!='\0';i++)
 {
  push(s[i]);
 }
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]!=pop())
  {
  break;
  }
 }
 if(isempty())
  printf("string is palindrome");
 else
  printf("string is not palindrome");
}     
          
  
