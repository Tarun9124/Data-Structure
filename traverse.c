#include<stdio.h>
int main()
{
  int i,n,arr[20];
  printf("Prajapati Tarun Jayantibhai");
  printf("\nEnrollment No:206120316008");
  printf("\nEnter size of Array:");
  scanf("%d",&n);
  printf("Enter Array Elements\n");
  for(i=0;i<n;i++){
      printf("Element-%d::",i+1);
      scanf("%d",&arr[i]);
      }
      printf("Array Element:\n");
      for(i=0;i<n;i++){
      printf("%d",arr[i]);
      }
}
