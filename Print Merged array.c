#include<stdio.h>
#define N 5
void main()
{
  int a[N],b[N],c[N+N],i,k;
  int s1,s2;

  printf("Prajapati Tarun Jayantibhai");
  printf("\nEnrollment NO:206120316008");
  printf("\nEnter size of first array:");
  scanf("%d",&s1);
  //Input First array elements value
  printf("Enter values of first array:\n");
  for(i=0;i<s1;i++)
  {
    printf("Enter No-%d:",i+1);
    scanf("%d",&a[i]);
  }

  printf("Enter size of second array:");
  scanf("%d",&s2);
  //Input First array elements value
  printf("Enter values of second array:\n");
  for(i=0;i<s2;i++)
  {
    printf("Enter No-%d:",i+1);
    scanf("%d",&b[i]);
  }

  for(i=0;i<s1;i++)
   c[i] = a[i];
  for(i=0;i<s2;i++)
   c[s1+i] = b[i];

  //Print Merged Array
  printf("Merged Array:\n");
  for(k=0;k<s1+s2;k++)
    printf("%d\n",c[k]);
}
