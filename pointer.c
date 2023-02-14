#include<stdio.h>
#include<stdlib.h>
void Display(int *p){
    printf("\nValue=%d\n",*p);
    printf("Address=%d",p);
}
void DispalyPTP(int *p, int **p1){
    printf("Value By Pointer to Pointer=%d\n",**p1);
    printf("Address By Pointer to Pointer=%d\n",*p1);
}
void main(){
    int n,p,*p1,ch;
    printf("Prajapati Tarun Jayantibhai:\n");
    printf("ER-NO:206120316008\n");
    printf("\nEnter a Number: ");
    scanf("%d",&n);
    p=&n;
    p1=&p;
    printf("\n1.Pointer By Value:\n");
    printf("2.Pointer to Pointer By Value:\n");
    printf("\nEnter Choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:Display(p);break;
        case 2:DispalyPTP(p,p1);break;
        default:printf("Invalid choice");
    }
}
