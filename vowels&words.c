#include<stdio.h>
int main()
{
    char s[200];
    int vowels=0,word=0;
    int flag=0,i;
    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");
    printf("\nEnter a line of Text :");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' ||   s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vowels++;
        flag=0;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            word++;
        flag=1;
    }
    printf("Number of words:%d\n",word+1);
    printf("Number of Vowels:%d",vowels);
}
