#include <stdio.h>
int fibo(int,int,int);
void main()
{
    int n;
    float ans;
    printf("Enter :");
    scanf("%d",&n);
    printf("Fibonacci series :");
    fibo(0,1,n);
}
int fibo(int f,int s,int n)
{
    if(n==1)
    printf("%d ",f+s);
    else
    {
        printf("%d ",f+s);
        fibo(s,f+s,n-1);
    }
}