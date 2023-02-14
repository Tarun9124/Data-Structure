#include<stdio.h>
#include<string.h>
void main()
{
   char str[100], word[20];
   int i, j, ls, lw, temp, chk=0;
   printf("Name:Prajapati Tarun Jayantibhai");
   printf("\nEnrollment No: 206120316008");
   printf("\nEnter the String:");
   gets(str);
   printf("Enter Word to delete:");
   gets(word);
   ls = strlen(str);
   lw = strlen(word);

   i=0;
   while(i<ls)
   {
      temp = i;
      j=0;
      while(j<lw)
      {
         if(str[i]==word[j])
         i++;
         j++;
      }
      chk = i-temp;
      i++;
      if(chk==lw)
      {
         i = temp;
         j=i;
         while(j<(ls-lw))
         {
            str[j] = str[j+lw];
            j++;
         }
         ls = ls-lw;
         str[j]='\0';
      }
   }
   printf("New String = %s", str);
}
