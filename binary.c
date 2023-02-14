#include<stdio.h>
void main()
{
   int a[20],i=0,n,val;
   int LOW=0;
   int MIDDLE;
   int flag=1;
   printf("Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No:206120316008");
   printf("\nEnter the size of an array::");
   scanf("%d",&n);
   int HIGH=n-1;
   for(i=0;i<n;i++)
   {
       printf("Enter element-%d:",i+1);
       scanf("%d",&a[i]);
   }
   printf("Enter search element::");
   scanf("%d",&val);
   for(i=0;LOW<=HIGH;i++)
   {
       MIDDLE=(LOW+HIGH)/2;
       if(a[MIDDLE]>val)
        {
             HIGH = MIDDLE-1;
        }
        else if(a[MIDDLE]<val)
        {
              LOW = MIDDLE+1;
        }
        else if(a[MIDDLE]==val)
        {
             printf("%d is found in array.",val);
             flag=0;
             break;
        }

    }
    if(flag)
    {
        printf("%d is not found in array.",val);
    }
}
