#include<stdio.h>
#include<string.h>
void main()
{
    int l1=0,l2=0,l3=0,pos,N;
    char a[50],b[50],c[50],choice;

    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");

    printf("\nEnter String:");
    gets(a);
    printf("Enter Choice(1 for insert,2 for delete):");
    scanf("%c",&choice);
    getchar();
    switch(choice)
    {
     case '1':
               printf("\nEnter String to Insert:");
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
            printf("Inserted String: %s ",c);break;

     case '2':
      printf("Enter Position from Delete:");
      scanf("%d",&pos);
      getchar();
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
       printf("Modified String: %s",b);break;
       default : printf("Invalid Operation");
    }

}


