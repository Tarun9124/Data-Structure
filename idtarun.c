#include<stdio.h>
#include<string.h>
void main()
{
    int l1=0,l2=0,pos,N;
    char a[50],b[50];

    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");

    printf("\nEnter String:");
    gets(a);
    printf("Enter Position from Delete:");
    scanf("%d",&pos);
    printf("Enter Number of characters to delete:");
    scanf("%d",&N);

    pos = pos-1;

    while(l1<=pos)
    {
     b[l2]=a[l1];
     l1 = l1+1;
     l2 = l2+1;
    }

    while(N>0)
    {
     l1 = l1 + 1;
     N = N - 1;
    }

    while(a[l1]!= '\0')
    {
     b[l2] = a[l1];
     l2 = l2 + 1;
     l1 = l1 + 1;
    }
    b[l2] = '\0';
    printf("Modified String: %s",b);
 }
