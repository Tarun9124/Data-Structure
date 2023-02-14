#include<stdio.h>
void quick_sort(int, int);
int arr_sort[50];

int main() {
  int i,n;
  printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No.:206120316008");
   printf("\nEnter the size of the array:");
   scanf("%d",&n);
  printf("Enter %d Elements for Sorting::\n",n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr_sort[i]);

  printf("\nYour Data   :");
  for (i = 0; i < n; i++) {
    printf("\t%d", arr_sort[i]);
  }

  quick_sort(0, n - 1);
  printf("\nAfter Quick Sort:");
  printf("\n\nSorted Data :");
  for (i = 0; i < n; i++) {
    printf("\t%d", arr_sort[i]);
  }

}

void quick_sort(int f, int l) {
  int i, j, t, p = 0;

  if (f < l) {
    p = f;
    i = f;
    j = l;

    while (i < j) {
      while (arr_sort[i] <= arr_sort[p] && i < l)
        i++;
      while (arr_sort[j] > arr_sort[p])
        j--;
      if (i < j) {
        t = arr_sort[i];
        arr_sort[i] = arr_sort[j];
        arr_sort[j] = t;
      }
    }

    t = arr_sort[p];
    arr_sort[p] = arr_sort[j];
    arr_sort[j] = t;
    quick_sort(f, j - 1);
    quick_sort(j + 1, l);
  }
}
