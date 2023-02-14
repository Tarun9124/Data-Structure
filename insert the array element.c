//Write a Program to insert an element in array.
#include<stdio.h>
#define N 10
int main()
{
    int a[N],i,k;
    int pos,value;

    printf("Prajapati Tarun Jayantibhai");
    printf("\nEnrollment NO:206120316008");
  //Input elements less than size of array
  printf("Enter Data--->\n");
  for(i=0;i<N-2;i++)
   {
    printf("Enter No-%d:",i+1);
    scanf("%d",&a[i]);
   }
  printf("Enter value to insert;");
  scanf("%d",&value);
  printf("Enter Position:");
  scanf("%d",&pos);

  //Shift the existing value
  for(k=i-1;k>=pos-1;k--)
   a[k+1] = a[k];
  //Insert the value
  a[pos-1] = value;

  //printed updated array
  for(i=0;i<N-2+1;i++)
  {
   printf("[%d] = %d\n",i+1,a[i]);
  }
}
