#include<stdio.h>
#define n 6
void bubble(int *a);
void main()
{
    int a[n],i;
    printf("Tarun prajapati");
    printf("\n206120316008");
    printf("\nEnter Elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter value of A[%d]:",i);
        scanf("%d",&a[i]);
    }
    bubble(a);
    printf("Sorted list\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
void bubble(int *a)
{
    int i,j,k,temp;
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
       printf("\nAfter pass:-%d\n",i+1);
       for(k=0;k<n;k++)
       printf(" %d ",a[k]);
       printf("\n");
    }
}
