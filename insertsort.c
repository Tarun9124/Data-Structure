#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    printf("\nList After Sorting:");
    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[50],n,i;
    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No.:206120316008");
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d Elements for Sorting::\n",n);
    for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("List Before Sorting:");
    for (i = 0; i < n; i++)
    printf("%d ",arr[i]);


    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
