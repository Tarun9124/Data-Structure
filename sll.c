#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *Nlink;
};
struct node *First = NULL;
int value;
void Insert_At_Begin()
{
    struct node *Avail;
    Avail = (struct node *) malloc(sizeof(struct node *));
    if(Avail == NULL)
    {
        printf("\nAvailability Stack is Empty:");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d",&value);
        Avail->info = value;
        Avail->Nlink = First;
        First = Avail;
        printf("\nNode inserted at begin\n");
    }

}
void Insert_At_Last()
{
    struct node *Avail,*Save;
    Avail = (struct node*)malloc(sizeof(struct node));
    if(Avail == NULL)
    {
        printf("\nAvailability Stack is Empty:");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d",&value);
        Avail->info = value;
        if(First == NULL)
        {
            Avail -> Nlink = NULL;
            First = Avail;
            printf("\nNode inserted at last\n");
        }
        else
        {
            Save= First;
            while (Save ->Nlink != NULL)
            {
                Save = Save->Nlink;
            }
            Save->Nlink = Avail;
            Avail->Nlink = NULL;
            printf("\nNode inserted at last\n");

        }
    }
}
void Delete_From_Begin()
{
    struct node *Avail;
    if(First == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        Avail = First;
        First = Avail->Nlink;
        free(Avail);
        printf("\nNode deleted from the beginning\n");
    }
}
void Delete_From_Last()
{
    struct node *Avail,*Save;
    if(First == NULL)
    {
        printf("\nlist is empty");
    }
    else if(First ->Nlink == NULL)
    {
        First = NULL;
        free(First);
        printf("\nNode Deleted At Last\n");
    }

    else
    {
        Avail = First;
        while(Avail->Nlink != NULL)
        {
            Save = Avail;
            Avail = Avail ->Nlink;
        }
        Save->Nlink = NULL;
        free(Avail);
        printf("\nNode Deleted At Last\n");
    }
}
void Random_Insert()
{
    int i,loc,item;
    struct node *Avail, *Save;
    Avail = (struct node *) malloc (sizeof(struct node));
    if(Avail == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter element value:");
        scanf("%d",&value);
        Avail->info = value;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        Save=First;
        for(i=0;i<loc;i++)
        {
            Save = Save->Nlink;
            if(Save == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }

        }
        Avail ->Nlink = Save ->Nlink;
        Save ->Nlink = Avail;
        printf("\nNode inserted");
    }
}
void search()
{
    struct node *Avail;
    int item,i=0,flag;
    Avail = First;
    if(Avail == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d",&value);
        while (Avail!=NULL)
        {
            if(Avail->info == value)
            {
                printf("item found at location %d ",i+1);
                flag=1;
            }
            else
            {
                flag=0;
            }
            i++;
            Avail = Avail -> Nlink;
        }
        if(flag==0)
        {
            printf("Item not found\n");
        }
    }

}
void display()
{
    struct node *Avail;
    Avail = First;
    if(Avail == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nValues:\n");
        while (Avail!=NULL)
        {
            printf("%d\n",Avail->info);
            Avail = Avail -> Nlink;
        }
    }
}
void Count(){
    struct node *Avail;
    int count=0;
    Avail = First;
    if(Avail==NULL)
        printf("Count=0:\n");
    else{
        while(Avail!=NULL){
            count = count+1;
            Avail = Avail->Nlink;
        }
    }
    printf("Count=%d",count);
}
void main ()
{
    int choice =0;
    printf("Name:Prajpati Tarun Jayantibhai");
    printf("\nEnrollment No.:206120316008\n");
    while(choice != 9)
    {

        printf("\n-------------------------------------------\n");
        printf("\nThis Functions For Singly Linked List.\n");
        printf("\n1.Insert At Begin:\n");
        printf("2.Insert At Last:\n");
        printf("3.Delete From Begin:\n");
        printf("4.Delete from Last:\n");
        printf("5.Random Insert:\n");
        printf("6.Searching:\n");
        printf("7.Count:\n");
        printf("8.Display:\n");
        printf("9.Exit:\n");
        printf("\nEnter your choice?\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            Insert_At_Begin();
            break;
            case 2:
            Insert_At_Last();
            break;
            case 3:
            Delete_From_Begin();
            break;
            case 4:
            Delete_From_Last();
            break;
            case 5:
            Random_Insert();
            break;
            case 6:
            search();
            break;
            case 7:
            Count();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Please enter valid choice..");
        }
    }
}
