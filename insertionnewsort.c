#include<stdio.h>
#define n 6
void insertion_sort(int *a);
void main()
{
    int a[n],i;
    printf("Tarun Prajapati");
    printf("\n206120316008");
    printf("\nEnter Elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter value of A[%d]:",i);
        scanf("%d",&a[i]);
    }
    insertion_sort(a);
    printf("Sorted list\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void insertion_sort(int *a)
{
    int i,j,k,key,temp;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i;j>0;j--)
        {
            if(key<a[j-1])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
       printf("Insertion Sort:::");
       printf("\nAfter pass:-%d\n",i);
       for(k=0;k<n;k++)
       printf(" %d ",a[k]);
       printf("\n");
    }
}
