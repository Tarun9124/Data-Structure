#include<stdio.h>
#include<stdlib.h>
int i;
int Rear = -1, Front= -1;
void Insert(int *ptr,int n,int el){
    if(Rear>=n-1 && Front == 0)
        printf("Circular Queue is Overflow:\n");
    else{
            if(Rear == -1 && Front == -1){
                Front=0;
                Rear=0;
            }
            else if(Rear==n-1 && Front!=0){
                Rear=0;
            }
            else{
                Rear++;
        }
        ptr[Rear] = el;
        printf("%d is Inserted:\n",ptr[Rear]);
    }
}
void Delete(int *ptr,int n,int el){
    if(Front==-1)
        printf("Circular Queue is Underflow:\n");
    else{
        printf("%d is deleted:\n",ptr[Front]);
        if(Front==Rear){
            Front=-1;
            Rear=-1;
        }
        else{
            if(Front==n-1)
                Front = 0;
            else{
                Front++;
            }
        }
    }
    printf("\n");
}
void Display_Array(int *ptr, int n, int el){
    if(Front==-1)
        printf("Circular Queue is empty:\n");
    else if(Rear>=Front){
            for(i=Front;i<=Rear;i++)
                printf("%d\n",ptr[i]);
    }
    else{
            for(i=Front;i<=n-1;i++)
                printf("%d\n",ptr[i]);
            for(i=0;i<=Rear;i++)
                printf("%d\n",ptr[i]);
        }
        printf("\n");
}
void main(){
    int n;
    int *ptr;
    int el,ch;
    printf("Prajapati Tarun\n");
	printf("Enrollment No.:206120316008\n");
    printf("Enter size of an array:");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
        printf("1:ENQUEUE\n");
        printf("2:DEQUEUE\n");
        printf("3:Display Queue\n");
        printf("4.Exit\n");
    while(1){

        printf("Enter Choice: ");
        scanf("%d",&ch);
        if(ch!= 4 && ch!= 3){
            printf("Enter Element : ");
            scanf("%d",&el);
        }
        switch(ch){
            case 1 : Insert(ptr,n,el); break;
            case 2 : Delete(ptr,n,el); break;
            case 3 : Display_Array(ptr,n,el); break;
            case 4 : exit(0); break;
            default : printf("Invalid Choice:\n");
        }
    }
}
