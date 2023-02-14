#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void push(int *QUEUE,int x);
void pop(int *QUEUE);
void display(int *QUEUE);
int FRONT=-1;
int REAR=-1;
int QUEUE[SIZE];
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
                 push(QUEUE,x);
                 break;
          case 2:
                 pop(QUEUE);
                 break;
          case 3:
                 display(QUEUE);
                 break;

          case 4:
                 exit(0);
         }
    }
}
void push(int *QUEUE,int x)
{
    if(REAR>=SIZE-1)
    printf("Queue is Overflow");
    else
    {
      REAR=REAR+1;
      QUEUE[REAR]=x;
      if(FRONT==-1)
      FRONT=0;
    }
}
void pop(int *QUEUE)
{
    if(FRONT==-1)
    printf("Queue is Underflow");
    else
    {
        printf("Deleted Element is %d\n",QUEUE[FRONT]);
        if(FRONT==REAR)
        {
            FRONT=-1;
            REAR=-1;
        }
        else
        {
            FRONT=FRONT+1;
        }
    }
}
void display(int *QUEUE)
{
   int i;
   if(FRONT==-1)
   printf("Queue is Empty\n");
   else
   {
       for(i=FRONT;i<=REAR;i++)
       printf("%d\n",QUEUE[i]);
   }
}
