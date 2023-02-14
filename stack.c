#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void push(int *STACK,int x);
void pop(int *a);
void display(int *a);
int TOP=-1;
int STACK[SIZE];
void main()
{
    int x,ch;
    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No.:206120316008");
    while(1)
      {
        printf("\nSelect Your Choice:\n");
        printf("(1) PUSH\n");
        printf("(2) POP\n");
        printf("(3) Display\n");
        printf("Enter Your Choice::");
        scanf("%d",&ch);
        switch(ch)
         {
          case 1:
                 printf("Enter Element:");
                 scanf("%d",&x);
                 push(STACK,x);
                 break;
          case 2:
                 pop(STACK);
                 break;
          case 3:
                 display(STACK);
                 break;

          case 4:
                 exit(0);
         }
    }
}
void push(int *STACK,int x)
{
    if(TOP>=SIZE-1)
    printf("Stack is Overflow");
    else
    {
      TOP=TOP+1;
      STACK[TOP]=x;
    }
}
void pop(int *STACK)
{
    if(TOP==-1)
    printf("Stack is Underflow");
    else
    {
        printf("Deleted Element is %d\n",STACK[TOP]);
        TOP=TOP-1;
    }
}
void display(int *STACK)
{
   int i;
   if(TOP==-1)
   printf("Stack is Empty\n");
   else
   {
       for(i=TOP;i>=0;i--)
       printf("%d\n",STACK[i]);
   }
}
