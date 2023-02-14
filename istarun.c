#include<stdio.h>
#include<string.h>
void main()
{
    int l1=0,l2=0,l3=0,pos;
    char a[50],b[50],c[50];

    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");

    printf("\nEnter String:");
    gets(a);
    printf("Enter String to Insert:");
    gets(b);
    printf("Enter Position Where Insert:");
    scanf("%d",&pos);

    pos = pos-1;

    while(l1<=pos)
    {
     c[l3]=a[l1];
     l1 = l1+1;
     l3 = l3+1;
    }
    while(b[l2]!= '\0')
    {
     c[l3] = b[l2];
     l2 = l2 + 1;
     l3 = l3 + 1;
    }
    while(a[l1]!='\0')
    {
      c[l3] = a[l1];
      l1 = l1 + 1;
      l3 = l3 + 1;
    }
    c[l3] = '\0';
    printf("Inserted String: %s ",c);

}
