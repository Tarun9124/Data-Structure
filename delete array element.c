//Write a Program to delete an element in array.
#include<stdio.h>
#define N 10
int main()
{
    int a[N],i,k;
    int pos;

    printf("Prajapati Tarun Jayantibhai");
    printf("\nEnrollment NO:206120316008");
  //Input elements of array
  printf("\nEnter Data--->\n");
  for(i=0;i<N;i++)
   {
    printf("Enter No-%d:",i+1);
    scanf("%d",&a[i]);
   }
  printf("\nEnter Position to delete:");
  scanf("%d",&pos);

  //Shift the value up and delete the value
  for(k=pos-1;k<N;k++)
   a[k] = a[k+1];

  //printed updated array
  for(i=0;i<N-1;i++)
  {
   printf("[%d] = %d\n",i+1,a[i]);
  }
  return 0;
}
