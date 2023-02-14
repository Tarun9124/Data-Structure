#include <stdio.h>
#include <string.h>
void main()
{
    char a[50];
    char b[50];
    char c[50];
    int p=0,r=0,i=0;
    int t=0;
    int x,g,s,n,o;

    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");
    printf("\nEnter First String:");
    gets(a);
    printf("Enter String to insert:");
    gets(b);
    printf("Enter the position:");
    scanf("%d",&p);
    r = strlen(a);
    n = strlen(b);

    i=0;
    while(i <= r)
    {
        c[i]=a[i];
        i++;
    }
    s = n+r;
    o = p+n;

    i = p;
    while(i < s)
    {
        x = c[i];
        if(t<n)
        {
            a[i] = b[t];
            t=t+1;
        }
        i++;
        a[o]=x;
        o=o+1;
    }
    printf("%s", a);
}
