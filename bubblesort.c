#include<stdio.h>
#include<stdlib.h>
void bubblesort(int a[],int size);
void main()
{
  int a[50],n,i;
  printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No.:206120316008");
  printf("\nEnter the size of the array:");
  scanf("%d",&n);

 printf("\nEnter the array elements::\n");

 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  bubblesort(a,n);
  printf("\nSorted List after bubblesort--->\n");
  for(i=0;i<n;i++)
  printf("%d\t",a[i]);
}
void bubblesort(int a[],int size)
{
  int temp,i,j;
  for(i=0;i<size;i++)
  {
   for(j=0;j<size-1;j++)
   {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
  }
 }
}
