#include<stdio.h>
#include<string.h>
void main()
{
   char s[40],c[20],s1[20],s2[20],sub[10],r[20],a[40],choice;
   int len,l1,l2,i,j,p,f=0;

    printf("Name:Prajapati Tarun Jayantibhai");
    printf("\nEnrollment No: 206120316008");

    printf("\nEnter 1 for find string length.");
    printf("\nEnter 2 for copy string.");
    printf("\nEnter 3 for convert string lowercase to uppercase.");
    printf("\nEnter 4 for convert string uppercase to lowercase.");
    printf("\nEnter 5 for concate two string.");
    printf("\nEnter 6 for compare two string.");
    printf("\nEnter 7 for create sub-string.");
    printf("\nEnter 8 for reverse string.");
    printf("\nEnter 9 for append string.");

    printf("\nEnter Choice:");
    scanf("%c",&choice);
    getchar();
    switch(choice)
    {
   case '1':printf("Enter string:");
            gets(s);
            len=0;
            while(s[len]!='\0')
            len++;
            printf("Length of String : %d",len);break;

   case '2':printf("Enter string :");
            gets(s);
            i=0;
            while(s[i]!='\0')
           {
            c[i]=s[i];
            i++;
           }
           printf("\nCopied string : %s",c);break;

   case '3':printf("Enter string :");
            gets(s1);
            i=0;
             while(s1[i]!='\0'){
             if(s1[i]>='a'&&s1[i]<='z')
             s2[i] = s1[i]-32;
             else
             s2[i] = s1[i];
             i++;
            }
            printf("\nString in Uppercase: %s",s2);break;


    case '4':printf("Enter string :");
             gets(s1);
             i=0;
             while(s1[i]!='\0'){
             if(s1[i]>='A'&&s1[i]<='Z')
             s2[i] = s1[i]+32;
             else
             s2[i] = s1[i];
             i++;
            }
            printf("\nString in Lowercase: %s",s2);break;

    case '5':printf("Enter string no.1:");
             gets(s1);
             printf("Enter string no.2:");
             gets(s2);
             i=0;
             while(s1[i]!='\0'){
             s[i]=s1[i];
             i++;
             }
             j=0;
             while(s2[j]!='\0'){
             s[i]=s2[j];
             i++,j++;
             }
             s[i]='\0';
             printf("Concate string : %s",s);break;

    case '6':printf("Enter string no.1:");
             gets(s1);
             printf("Enter string no.2:");
             gets(s2);
             l1 = strlen(s1);
             l2 = strlen(s2);
             if(l1==l2)
             {
             for(i=0;s1[i]!='\0';i++)
              {
               if(s1[i]!=s2[i])
               {
                 f++;
                 break;
               }
              }
             if(f)
             printf("Strings are different");
             else
            printf("Strings are Equal");
           }
          else printf("Strings are different");break;


     case '7':printf("Enter string :");
              gets(s);
              printf("Enter Position :");
              scanf("%d",&p);
              for(i=0;s[p-1]!='\0';i++)
              {
               sub[i]=s[p-1];
               p++;
              }
              sub[i]='\0';
              printf("Sub String : %s",sub);break;

     case '8': printf("Enter string :");
               gets(s);
               for(i=0;s[i]!='\0';i++);
               len = i;
               for(i=0;s[i]!='\0';i++)
               {
               r[len-1]=s[i];
               len--;
               }
               r[i]='\0';
               printf("Reverse string: %s",r);break;

     case '9':printf("Enter string:");
              gets(s1);
              printf("Enter string to append:");
              gets(s2);
              i=0;
              while(s1[i]!='\0')
              {
               a[i]=s1[i];
               i++;
              }
              j=0;
              while(s2[j]!='\0')
              {
               a[i]=s2[j];
               i++,j++;
              }
              a[i]='\0';
              printf("Append string : %s",a);break;

     default : printf("Invalid Operation");
    }
 }

