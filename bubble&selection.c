#include<stdio.h>
#include<stdlib.h>
void bubblesort(int [],int size);
void main()
{
    int a[50],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array elements::");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("\n The Sorted List::\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void  bubblesort(int a[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;i++)
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
