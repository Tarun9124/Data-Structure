#include <stdio.h>
int ispalin(char s[])
{
    int i,k,flag=1;
    for(i=0; s[i]!='\0'; i++);
    for(k=0; k<i/2; k++)
    {
        if(s[k]!=s[i-k-1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
void main()
{
    char str[15];
    int len;
    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");
    printf("\nEnter string :");
    scanf("%s",str);
    if(ispalin(str))
        printf("%s is palindrome",str);
    else
        printf("%s is not palindrome",str);
}
