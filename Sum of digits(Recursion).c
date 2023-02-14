#include <stdio.h>
int sod(int );
void main()
{
    int n,ans;
    printf("Enter no. :");
    scanf("%d",&n);
    ans = sod(n);
    printf("Sum of digits : %d",ans);
}
int sod(int n)
{
    if(n==0)
    return 0;
    else
    return((n%10)+sod(n/10));
}