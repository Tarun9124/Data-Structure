#include <stdio.h>
int main() {
   int arr[50];
   int i, j,n, position, swap;
   printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No.:206120316008");
   printf("\nEnter the size of the array:");
   scanf("%d",&n);

   printf("\nEnter the array elements::\n");
   for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
