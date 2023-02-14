#include<stdio.h>
void search(int a[],int vall,int nn){
     int found = 0,i;
     for(i=0;i<nn;i++){
         if(a[i]==vall){
            found=1;
            break;
            }
        }
        if(found) printf("%d is found/searching is successful.",vall);
        else printf("%d is not found /searching is Unsuccessful.",vall);
}
int main()
{
 int i,n,arr[28],j,val;
 printf("Name: Tarun Prajapati\n");
 printf("Er.No: 206120316008\n");
 printf("Enter Range of Array:: ");
 scanf("%d",&n);
 printf("Enter Elements\n");
 for(i=0;i<n;i++)
 {
   printf("Element - %d:: ",i+1);
   scanf("%d",&arr[i]);
 }
   printf("Enter Value for Search:: ");
   scanf("%d",&val);
   printf("Searching....\n");
   search(arr,val,n);
}
