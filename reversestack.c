#include<stdio.h>
char str[20];
int top=0;
void push(char data)
{
    top++;
    str[top]=data;
}
char pop()
{
    char data;
    data = str[top];
    top--;
    return data;
}
void main()
{
    char s[20];
    int i=0;
    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No.:206120316008");
    printf("\nEnter string :");
    gets(s);
    while(s[i]!='\0')
        push(s[i++]);
    printf("Reverse string:");
    while(top!=0)
        printf("%c",pop());
}
