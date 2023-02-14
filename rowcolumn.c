#include<stdio.h>
int main()
{
    int arr[15][15],m,n,i,j;
    printf("Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No:206120316008");
    printf("\nEnter Rows : ");
    scanf("%d",&m);
    printf("Enter Columns : ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter no. : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Row major order:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("Column major order:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}
