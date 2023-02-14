#include<stdio.h>
#define n 6
void selection_sort(int *a);
void main()
{
    int a[n],i;
    printf("Tarun Prajapati");
    printf("\n206120316008");
    printf("\nEnter Elements in array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter value of A[%d]:",i);
        scanf("%d",&a[i]);
    }
    selection_sort(a);
    printf("Sorted list\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void selection_sort(int *a)
{
    int i,j,k,temp,min,pos;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                pos=j;
            }
        }
         temp=a[i];
         a[i]=a[pos];
         a[pos]=temp;

       printf("Selection Sort:::");
       printf("\nAfter pass:-%d\n",i+1);
       for(k=0;k<n;k++)
       printf(" %d ",a[k]);
       printf("\n");
    }
}
