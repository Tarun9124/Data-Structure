#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s1[100],s2[100];
 void scopy(char s1[],char s2[]);
 printf("Name:Prajapati Tarun Jayantibhai");
 printf("\nEnrollment No: 206120316008");
 printf("\nEnter a String:");
 scanf("%s",s1);
 scopy(s1,s2);
 printf("\nThe First String is : %s\n",s1);
 printf("The Second String is : %s\n",s2);
}
void scopy(char s1[],char s2[])
{
 int length=0;
 while(s1[length]!='\0')
 {
   s2[length]=s1[length];
   length=length+1;
 }
 s2[length]='\0';
 printf("Total Number of characters copoied : %d\n",length);
}
