#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int st[5];int top=-1;
void push(int item)
{
  if(top==STACK_SIZE-1)
    printf("Stack Overflow\n");
  else 
  {
    top++;
    st[top]=item;
  }
}
int pop()
{
  int del_item;
  if (top==-1)
    printf("Stack Underflow\n");
  else
  {
    del_item=st[top];
    top--;
    return del_item;
  }
}
void display()
{
  int i;
  if(top==-1)
    printf("Stack is empty\n");
  for(i=0;i<=top;i++)
    printf("%d\n",st[i]);
}
void main()
{
  int ch,ele,del;
  while(1)
  {
    printf("Enter your choice\n n1 : to insert element\n n2 : to delete element\n n3 : to display the stack elements\n n4 : to exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\nenter the item to be inserted : ");
              scanf("%d",&ele);
              push(ele);
              break;
      case 2: del=pop();
              printf("\n The deleted element is %d",del);
              break;
      case 3: display();
              break;
      case 4: exit (0);
      default: printf("\nINVALID CHOICE!!");
              
    }
   }
}