#include<stdio.h>
#include<string.h>
void AppStr(char s1[], char s2[]){
    int i,len;
    len = strlen(s1);
    for(i=0;s2[i]!='\0';i++,len++)
        s1[len] = s2[i];
    s1[len] = '\0';
    printf("Appended String:%s",s1);

}
void main(){
    char s1[20],s2[20];
    printf("Enter a string:");
    gets(s1);
    printf("Enter additional string:");
    gets(s2);
    AppStr(s1,s2);

}
